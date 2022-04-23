#pragma once

/*	BINARY TREES	*/
class Node {

	int data{};
	Node* left;
	Node* right;

	Node();
	Node(int val);

	friend class BinaryTree;
};


class BinaryTree {

	Node* head;
	int totalNodes;

	BinaryTree();



};