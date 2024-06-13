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
       search(element, parent, currentNode); //locate the node which will be the parent of the node to be insert
      
      if (parent == nullptr) //if the is the null (tree is empety)
      {
        ROOT = newNode; //if the parent node as root
        return; //exit
      }
      if (element < parent->info) //if the vaue in the data field of the new node is less than that of the parent
      {
        parent->leftchild =newNode; //make the left child of the parent point to the nwenode
      }
      else if (element>parent ->info ) //if the value  in the data field of the new node is greater than that of the parent
      {
        parent->rightchild =newNode; //maake the right child on the parentpoint to the newnode
      }
     }

     void search(string element, Node*&parent, Node*&currentNode)
     {
        //this function seacrh the currentNode of the spesified node as well as the current  node of its parent
        currentNode = ROOT;
        parent = NULL;
        while ((currentNode !=NULL)&&(currentNode->info != element))
        {
            parent = currentNode;
            if (element <currentNode->info)
                currentNode = currentNode->leftchild;
            else 
              currentNode = currentNode->rightchild;

        }
     }
     void inorder(Node*ptr)
     {
        if (ROOT == NULL)
        {
            cout <<"Tree is empety"<<endl;
            return;
        }
        if (ptr !=NULL)
        {
            inorder(ptr->leftchild);
            cout <<ptr->info <<" ";
            inorder(ptr->rightchild);
        }
     }

      void preorder(Node*ptr)
     {
        if (ROOT == NULL)
        {
            cout <<"Tree is empety"<<endl;
            return;
        }
        if (ptr !=NULL)
        {
            cout <<ptr->info <<" ";
            preorder(ptr->leftchild);
            preorder (ptr->rightchild );
        }
     }
      void postorder(Node*ptr)
     {
        if (ROOT == NULL)
        {
            cout <<"Tree is empety"<<endl;
            return;
        }
        if (ptr !=NULL)
        {
            
            postorder(ptr->leftchild);
          postorder (ptr->rightchild );
            cout <<ptr->info <<" ";
        }
     }
};
