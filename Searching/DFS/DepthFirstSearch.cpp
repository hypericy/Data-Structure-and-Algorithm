#include <iostream>
using namespace std;
class Node{
  public:
    Node* left;
    Node* right;
    int value;
    Node(int value){
      this->value = value;
    }
};
class BinarySearchTree{
  public:
    Node* root=nullptr;
    void insert(int value)
    {
      Node* n= new Node(value);
      if(root==nullptr)
        root = n;
      else
      {
        Node* cur = root;
        while(cur!=nullptr)
        {
          if(value>cur->value)
          { 
            if(cur->right==nullptr)
            {
              cur->right = n;
              return;
            }
            cur = cur->right;
          }
          else if(value< cur->value)
          {
            if(cur->left==nullptr)
            {
              cur->left = n;
              return;
            }
            cur = cur->left;
          }
        }
      }
      return;
    }
    void DFSinorder()
    {
      traverseInorder(this->root);
      return;
    }
    void traverseInorder(Node* n)
    {
      return;
    }
};

int main() {
  BinarySearchTree BST;
  BST.insert(9);
  BST.insert(4);
  BST.insert(6);
  BST.insert(20);
  BST.insert(170);
  BST.insert(15);
  BST.insert(1);
  

}
