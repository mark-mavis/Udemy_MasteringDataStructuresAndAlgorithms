#include "BinarySearchTree.h"
#include <iostream>

int main() {
	BinarySearchTree BinTree(50);

	BinTree.Insert(BinTree.Root(), 25);
	BinTree.Insert(BinTree.Root(), 75);
	BinTree.Insert(BinTree.Root(), 12);
	BinTree.Insert(BinTree.Root(), 37);
	BinTree.Insert(BinTree.Root(), 62);
	BinTree.Insert(BinTree.Root(), 87);

	BinTree.Search(BinTree.Root(), 12);
	
	BinTree.PreorderTraversal(BinTree.Root());
	BinTree.InorderTraversal(BinTree.Root());
	BinTree.PostorderTraversal(BinTree.Root());
		
	//Invalid Test Cases
	//BinTree.insertNode(BinTree.Root(), 42);


	return 0;
}