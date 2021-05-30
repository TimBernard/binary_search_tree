#ifndef BST_HPP
#define BST_HPP

#include <iostream>
#include <queue>
#include <sstream> 
#include <string> 
#include <algorithm> 

#include "BST.hpp"
#include "Node.hpp"

class BST{
  public:
    BST() = default;
    BST(int arr[], int arrlength);
    ~BST();

    // build binary search tree from array of keys 
    Node* make_tree(int arr[], int arrlength);

    // insert input key into BST (reutrn its new node)
    Node* insert(Node* node, int key);

    // return node containing queried key
    Node* search(Node* node, int key);

    // get number of nodes along longest "path"  
    int get_height(Node* node);

    // helper function 
    Node* get_root() const;
    void levelOrder(Node* root) const;

  private:
    Node* root; 
};
#endif /* BST_HPP */
