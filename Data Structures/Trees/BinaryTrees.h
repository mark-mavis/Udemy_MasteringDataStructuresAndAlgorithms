#pragma once

class Node {
private:
	int data{};
	Node* left;
	Node* right;
public:
	Node();
	Node(int val);
	~Node();
	
	friend class BinaryTree;
};

class BinaryTree {
private:
	Node* root;
	int totalNodes{};
	Node* getNewNode(int val);

public:
	BinaryTree();
	//~BinaryTreeDestructor();
	
	
	bool insertNode(int val);
	//int deleteNode(int val);
	//Node* search(int val);

	void preorderTraversal();
	void inorderTraversal();
	void postorderTraversal();
};