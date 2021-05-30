#include <iostream>
#include <string> 
#include <vector>
#include <stdlib.h>

#include "BST.hpp"

using std::cout; 
using std::endl;
int main(int argc, char** argv){

  // populate array with input arguments 
  std::cout << "argc:" << argc << "\n";
  int arrlength  = argc-1;
  int arr[arrlength];
  for(int i = 1; i < argc; ++i){
    arr[i-1] = atol(argv[i]);
  }

  cout << "\n";
  cout << "Testing binary search tree with array:";  
  for (int i = 0; i < arrlength; ++i){
    cout << arr[i] << " "; 
  }
  cout << "\n";

  // create binary search tree 
  BST my_tree = BST(arr,arrlength);

  // tree height 
  std::cout << "Tree Height: " << my_tree.get_height(my_tree.get_root()) << std::endl;

  // level oreder traversal
  std::cout << "Level Order: " << std::endl;
  my_tree.levelOrder(my_tree.get_root());
} 
