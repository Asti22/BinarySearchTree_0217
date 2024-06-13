#include <iostream>
#include <string>
using namespace std;

class Node {
public:
    string info;
    Node*leftchild;
    Node*rightchild;

    //constructor for the node class
    Node(string i, Node* l, Node* r)
    {
        info = i;
        leftchild = l;
        rightchild= r;
    }
};

class BinaryTree{
public:
     Node* ROOT;
     BinaryTree()
     {
        ROOT = nullptr; //initializing root to null
     }
     void insert(string element)//insert a node in the binary seacrh tree
     {
        Node* newNode = new Node(element, nullptr, nullptr); //alocate memory for the new node
        newNode->info = element; //assigh value to the data field of the new node
        newNode->leftchild=nullptr; //make the left child of the new node point to null
        newNode->rightchild= nullptr; //make the right child of the new node to null

       Node* parent = nullptr;
       Node* currentNode = nullptr;

     }
};
