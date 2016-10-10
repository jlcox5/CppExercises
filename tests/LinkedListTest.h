#include <iostream>

#include "../datastructures/LinkedList.h"

using namespace std;

void testLinkedList(){
    LinkedList l;
    
    l.InsertNode( 1 );
    cout << "First list:" << endl;
    l.PrintList();
    
    l.InsertNode( 2 );
    l.InsertNode( 3 );
    cout << "Second list:" << endl;
    l.PrintList();
    
    l.DeleteNode( 2 );
    cout << "Third list:" << endl;
    l.PrintList();
    
    l.InsertNode( 2 );
    l.InsertNode( 2 );
    cout << "Fouth list:" << endl;
    l.PrintList();
}