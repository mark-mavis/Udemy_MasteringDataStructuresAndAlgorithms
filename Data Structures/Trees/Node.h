#pragma once
class Node {
private:
	int data;
	Node* left;
	Node* right;
public:
	Node(int val);
	Node* Left();
	Node* Right();
	int Data();

	friend class BinarySearchTree;
};