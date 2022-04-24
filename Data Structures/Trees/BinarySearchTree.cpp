#include "BinarySearchTree.h"
#include "Node.h"
#include <string>
#include <iostream>

//Binary Tree Private Functions
Node* BinarySearchTree::Root() { return root; }

//Binary Tree Public Functions
BinarySearchTree::BinarySearchTree(int val) : root{ new Node(val)}, totalNodes{0}{}



void BinarySearchTree::Insert(Node* root, int val) {
	std::cout << &root << std::endl;
	if (root) {			// If the head node exists
		if (val < root->data) {
			if (root->left == NULL) {
				Node* newNode = new Node(val);
				root->left = newNode;
			}
			else {
				Insert(root->left, val);
			}
		}
		else if (val > root->data) {
			if (root->right == NULL) {
				Node* newNode = new Node(val);
				root->right = newNode;
			}
			else {
				Insert(root->right, val);
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
Node* BinarySearchTree::Search(Node* root, int val) {
	if (root) {
		if (val < root->data) {			//Val is less than
			Search(root->left, val);
		}
		else if (val > root->data) {	//Val is greater
			Search(root->right, val);
		}
		else {							//Val is equal too
			std::cout << "Node found at Address " << root << std::endl;
			return root;
		}
	}
	else {
		std::cout << "The Binary Search Tree is Empty or Value does not exist" << std::endl;
		return 0;
	}
}

void BinarySearchTree::PreorderTraversal(Node* root) {
	if (root == NULL) return;
	printf("%d ", root->data);
	PreorderTraversal(root->left);
	PreorderTraversal(root->right);
}

void BinarySearchTree::InorderTraversal(Node* root) {
	if (root == NULL) return;
	PreorderTraversal(root->left);
	printf("%d ", root->data);
	PreorderTraversal(root->right);
}

void BinarySearchTree::PostorderTraversal(Node* root) {
	if (root == NULL) return;
	PreorderTraversal(root->left);
	PreorderTraversal(root->right);
	printf("%d ", root->data);
}
