#include <iostream>

#include "../datastructures/HashList.h"

using namespace std;

void testHashList(){
    HashList h(5);
    h.InsertPair( 1, 2 );
    
    int val;
    bool found = h.GetValue( 1, val );
    if( found ){
        cout << "Found val for key: " << 1 << " val: " << val << endl;
    }
    else{
        cout << "Did not find val for key: " << 1 << endl;
    }
}