#include "BinarySearchTree.h"
#include <iostream>

int main() {
	BinarySearchTree BinTree(50);
	BinTree.insertNode(BinTree.Root(), 45);
	BinTree.insertNode(BinTree.Root(), 42);
	BinTree.insertNode(BinTree.Root(), 52);
	


	
	//Invalid Test Cases
	BinTree.insertNode(BinTree.Root(), 42);


	return 0;
}