#pragma once
#include "Node.h"

class BinarySearchTree {
private:
	Node* root;
	int totalNodes{};

	Node* GetNewNode(int val);

public:
	BinarySearchTree(int val);

	Node* Root() const;
	Node* Search(Node* root, int val);
	void Insert(Node* root, int val);

	void PreorderTraversal(Node* root);
	void InorderTraversal(Node* root);
	void PostorderTraversal(Node* root);
	
};