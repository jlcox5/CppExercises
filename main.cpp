#include <iostream>
#include <string>
#include "datastructures/HashList.h"
#include "algorithms/BubbleSort.h"
#include "tests/LinkedListTest.h"
#include "tests/HashListTest.h"

using namespace std;

void testLinkedList();
void testHashList();
void testString();
void recursiveFunction( int a );

class a{
    public:
        a(){}
        ~a(){}
};

class b: public a{
    public:
        b(){}
        ~b(){}
};


int main() {
    testLinkedList();
    testHashList();
    
    testString();
    recursiveFunction( 5 );
    return 0;
}

void testString(){
    string a = "This is my test string";
    string b = a.substr( 5, 10 );
    int index = a.find( b );
    cout << "String a: " << a << "     String b: " << b << endl;
    cout << "Substring b found at " << index << endl;
}

void recursiveFunction( int a ){
    if( a == 0 ){
        cout << "A: " << a << endl;
        return;
    }
    
    recursiveFunction( a - 1 );
    cout << "A: " << a << endl;
    return;
}
