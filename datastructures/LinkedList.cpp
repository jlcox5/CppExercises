/* LinkedList.cpp */
#include <iostream>
#include "LinkedList.h"

using namespace std;

LinkedList::LinkedList(){
    rootNode = new Node(0);
}

LinkedList::~LinkedList(){
    Node* nodeItr = rootNode->GetChild();
    while( nodeItr != nullptr ){
        Node *tempNode = nodeItr->GetChild();
        delete nodeItr;
        nodeItr = tempNode;
    }
}

void LinkedList::InsertNode( int d, int k /* = 0 */ ){
    Node* nodeItr = rootNode->GetChild();
    Node* parentNode = rootNode;
    while( nodeItr != nullptr ){
        if( nodeItr->GetData() == d ){
            break;
        }
        parentNode = nodeItr;
        nodeItr = nodeItr->GetChild();
    }
    if( nodeItr == nullptr ){
       nodeItr = new Node( d, k );
       parentNode->SetChild( nodeItr );
    }
}

bool LinkedList::DeleteNode( int d ){
    Node* nodeItr = rootNode->GetChild();
    Node* parentNode = rootNode;

    while( nodeItr != nullptr ){
        if( nodeItr->GetData() == d ){
            break;
        }
        parentNode = nodeItr;
        nodeItr = nodeItr->GetChild();
    }
    
    if( nodeItr != nullptr ){
        parentNode->SetChild( nodeItr->GetChild() );
        delete nodeItr;
    }
}

bool LinkedList::FindDataForKey( int k, int &d ){
    Node* curNode = rootNode->GetChild();
    while( curNode != nullptr ){
        if( curNode->GetKey() == k ){
            d = curNode->GetData();
            return true;
        }
    }
    
    return false;
}

bool LinkedList::FindKeyForData( int d, int &k ){
    Node* curNode = rootNode->GetChild();
    while( curNode != nullptr ){
        if( curNode->GetData() == d ){
            k = curNode->GetKey();
            return true;
        }
    }
    
    return false;  
}

void LinkedList::PrintList(){
    Node* curNode = rootNode->GetChild();
    int i = 0;
    while( curNode != nullptr ){
        cout << i << ": " << curNode->GetData() << endl;
        i++;
        curNode = curNode->GetChild();
    }
}