#include "BinarySearchTree.h"
#include "Node.h"
#include <string>
#include <iostream>

//Binary Tree Private Functions
Node* BinarySearchTree::Root() { return root; }

//Binary Tree Public Functions
BinarySearchTree::BinarySearchTree(int val) : root{ new Node(val)}, totalNodes{0}{}


void BinarySearchTree::SetRoot(int val) {
	root = new Node(val);
}

void BinarySearchTree::insertNode(Node* root, int val) {
	std::cout << &root << std::endl;
	if (root) {			// If the head node exists
		if (val < root->data) {
			if (root->left == NULL) {
				Node* newNode = new Node(val);
				root->left = newNode;
			}
			else {
				insertNode(root->left, val);
			}
		}
		else if (val > root->data) {
			if (root->right == NULL) {
				Node* newNode = new Node(val);
				root->right = newNode;
			}
			else {
				insertNode(root->right, val);
			}
		}
		else {
			std::cout << "The value already exists and can not be added" << std::endl;
		}
	}
	else {				// If the head node doesn't exist
		root = new Node(val);
	}
}
