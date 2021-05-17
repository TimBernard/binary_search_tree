#ifndef NODE_H
#define NODE_H 

class Node {
  public: 

    Node(int);
    Node* parent; 
    Node* left; 
    Node* right; 
    int key; 
};
#endif /* NODE_H */
