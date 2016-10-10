/* HashList class */

#include <vector>
#include "LinkedList.h"

#pragma once

class HashList{
    public:
        HashList();
        HashList( int bs );
        ~HashList(){}
        
        void InsertPair( int key, int value );
        bool GetValue( int key, int &value );
        bool GetKey( int value, int &key );
        
    private:
        int HashKey( int key );
    
        int bucketSize = 10;
        std::vector<LinkedList*> buckets;
};