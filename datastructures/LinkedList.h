/* Linked list class */

#include "Node.h"
#pragma once

class LinkedList{
    public:
        LinkedList();
        ~LinkedList();
        
        void InsertNode( int d, int k = 0 );
        bool DeleteNode( int d );
        bool FindDataForKey( int k, int &d );
        bool FindKeyForData( int d, int &k );
        
        void PrintList();
        
    private:
        Node* rootNode;
};
