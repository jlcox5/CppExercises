#include <iostream>
#include "HashList.h"

using namespace std;

HashList::HashList(){
    buckets.reserve( bucketSize );
    for( int i = 0; i < bucketSize; i++ ){
        buckets.push_back( new LinkedList() );
    }
}

HashList::HashList( int bs ): bucketSize(bs){
    buckets.reserve( bucketSize );
    for( int i = 0; i < bucketSize; i++ ){
        buckets.push_back( new LinkedList() );
    }
}

void HashList::InsertPair( int key, int value ){
    int hashedKey = HashKey( key );
    if( hashedKey > bucketSize ){
        cout << "InsertPair(), Error with key hash: " << key << endl;
    }
    
    buckets[ hashedKey ]->InsertNode( value, key );
}

bool HashList::GetValue( int key, int &value ){
    int hashedKey = HashKey( key );
    if( hashedKey > bucketSize ){
        cout << "GetValue(), Error with key hash: " << key << endl;
    }
    
    return buckets[ hashedKey ]->FindDataForKey( key, value );
}

bool HashList::GetKey( int value, int &key ){
    for( std::vector<LinkedList*>::iterator bucketItr = buckets.begin(); bucketItr != buckets.end(); bucketItr++ ){
        if( (*bucketItr)->FindKeyForData( value, key ) ){
            return true;
        }
    }
    
    return false;
}

int HashList::HashKey( int key ){
    return ( key * ( key + 3 ) ) % bucketSize;
}