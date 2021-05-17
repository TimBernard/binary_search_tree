#ifndef BST_HPP
#define BST_HPP

#include "BST.hpp"
#include "Node.hpp"

class BST{
  public:
    BST() = default;
    BST(int arr[], int arrlength);
    ~BST();
    Node* make_tree(int arr[], int arrlength);
    void insert(Node* root, int key);
    Node* search(Node* root, int key);
  private:
    Node* root; 
};


#endif /* BST_HPP */
