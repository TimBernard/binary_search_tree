#ifndef NODE_H
#define NODE_H 

class Node {
  public: 

    Node(int);
    ~Node();
    //Node* parent; 
    Node* left; 
    Node* right; 
    int key; 
    //int depth; 
};
#endif /* NODE_H */
