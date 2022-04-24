#pragma once
#include "Node.h"

class BinarySearchTree {
private:
	Node* root{};
	int totalNodes{};
public:
	BinarySearchTree();

	Node* Root();
	void SetRoot(int val);
	void insertNode(Node* root, int val);
};