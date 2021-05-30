#include "BST.hpp"

BST::BST(int arr[], int arrlength){
  root = make_tree(arr,arrlength);
}

BST::~BST(){

  delete root;
  root = nullptr;
}

// build binary search tree from array of keys 
Node* BST::make_tree(int arr[], int arrlength){

  //Node* root = nullptr;
  root = nullptr;
  for(int i = 1; i < arrlength; ++i){
    std::cout << "Inserting key: " << arr[i] << std::endl;
    root = insert(root,arr[i]);
  }
  std::cout << "Tree Built" << std::endl;
  return root; 
}

// insert input key into BST (reutrn its new node)
Node* BST::insert(Node* node, int key){

  //std::cout << "Hello" << std::endl;

  if(node == nullptr){
    node = new Node(key);
  }
  else if(key < node->key){
    node->left = insert(node->left,key);
  }
  else if(key >= node->key){
    node->right = insert(node->right,key);
  }
  return node;
}

int BST::get_height(Node* node){
  if(node == nullptr){
    return 0; 
  }
  else{
    return 1 + std::max(get_height(node->left), get_height(node->right));
  }
}

// helper function 
Node* BST::get_root() const{
  return root;
}

void BST::levelOrder(Node* root) const{ 
  
  std::queue<Node*> q;
  q.push(root);
  std::cout << root->left->key << std::endl;
  while (!q.empty()){
    Node* node = q.front();
    q.pop();
    std::cout << node->key << std::endl;
    if(node->left  != nullptr){
      q.push(node->left);
    }
    if(node->right != nullptr){
      q.push(node->right);
    }
  }
}
