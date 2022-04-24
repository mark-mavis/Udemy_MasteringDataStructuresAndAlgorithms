#pragma once
#include "Node.h"

class BinarySearchTree {
private:
	Node* root{};
	int totalNodes{};
public:
	BinarySearchTree(int val);

	Node* Root();
	Node* Search(Node* root, int val);
	void Insert(Node* root, int val);

	void PreorderTraversal(Node* root);
	void InorderTraversal(Node* root);
	void PostorderTraversal(Node* root);
	
};