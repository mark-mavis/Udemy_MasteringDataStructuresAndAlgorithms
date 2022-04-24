#include "BinarySearchTree.h"
#include <string>
#include <iostream>

Node::Node() : left{ NULL }, right{ NULL } {}
Node::Node(int val = 0) : data{ val }, left{ NULL }, right{ NULL } {}
Node::~Node() {
	delete left;
	delete right;
}

//Binary Tree Private Functions
Node* BinarySearchTree::getNewNode(int val) {
	Node* newNode = new Node(val);
}

//Binary Tree Public Functions
BinarySearchTree::BinarySearchTree() : root{ NULL }, totalNodes{ 0 }{}



bool BinarySearchTree::insertNode(int val) {
	if (root) {			// If the head node exists
		/*
		Node* temp = root;
		if (val < temp->data) {
			insertNode(node->left, val);
		}
		else if (val > temp->data) {
			insertNode(node->right, val);
		}
		else {
			std::cout << "The value already exists and can not be added" << std::endl;
			return 0;
		}
		*/
	}
	else {				// If the head node doesn't exist
		Node* newNode = new Node(val);
		root = newNode;
		return 1;
	}
}


//int BinaryTree::deleteNode(int val) {}
//Node* BinaryTree::search(int val) {}
