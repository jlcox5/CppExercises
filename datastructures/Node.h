/* Node class */
#pragma once

class Node{
    public:
        Node( int d ): data(d){}
        Node( int d, int k ): data(d), key(k){}
        ~Node(){}
        
        int GetData(){ return data; }
        void SetData( int d ){ data = d; }
        
        int GetKey(){ return key; }
        
        Node* GetChild(){ return childNode; }
        void SetChild( Node* child ){ childNode = child; }
        
    private:
        Node();
        int data = 0;
        int key = 0;
        Node * childNode = nullptr;
};