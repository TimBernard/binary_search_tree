#include <iostream>
#include <string> 
#include <vector>
#include <stdlib.h>

int main(int argc, char** argv){

  int arr[argc];
  for (int i = 0; i < argc; ++i){
    arr[i] = atol(argv[i]);
  }
  std::cout << "Testing binary search tree with array: {";
  for(int i = 0; i < argc; ++i){
    if (i==0){
      continue;
    }
    if (i == argc-1){
      std::cout << argv[i] << "";
    }else{
      std::cout << argv[i] << ", ";
    }
  }
  std::cout << "}\n";   
} 
