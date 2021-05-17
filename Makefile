CXX = g++
CXXFLAGS = -g -Wall -std=c++17

args = 1 12 14 8 19 21 204 35 17 

test_tree: main.o Node.o BST.o 
	$(CXX) $(CXXFLAGS) main.o Node.o BST.o -o test_tree

main: main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp 

Node.o: Node.cpp Node.hpp
	$(CXX) $(CXXFLAGS) -c Node.cpp 

BST.o: BST.cpp BST.hpp Node.cpp Node.hpp 
	$(CXX) $(CXXFLAGS) -c BST.cpp

clean:
	rm *.o *~

test:
	make 
	clear;
	./test_tree $(args)

run: 
	./test_tree $(args)
