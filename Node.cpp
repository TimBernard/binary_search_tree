#include "Node.hpp"
#include <string>

Node::Node(int key_input){
  key = key_input;
  left = nullptr;
  right = nullptr;
}

Node::~Node(){
  delete left;
  left = nullptr;
  delete right;
  right = nullptr;
}
