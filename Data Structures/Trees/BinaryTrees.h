#pragma once
class Node {

	int data{};
	Node* left;
	Node* right;

	Node();
	Node(int val);

	friend class BinaryTree;
};


class BinaryTree {
private:
	Node* head;
	int totalNodes{};

public:
	BinaryTree();
	
	Node* getHead();
	
	//int addNode(int val);
	//int deleteNode(int val);
	//Node* search(int val);

	void preorderTraversal();
	void inorderTraversal();
	void postorderTraversal();




};