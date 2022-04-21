#pragma once
class ListNode {
private:
	int m_value;
	ListNode* _next;
public:
	ListNode(int val);

	int getNodeVal();
	void setNodeVal(int val);

	ListNode* getNextNode();
	void setNextNode(ListNode* node);
};

class LinkedList {
private:
	ListNode* head;

public:
	LinkedList();
	void addNode(int val);
	void deleteNode(int val);
	
	ListNode* findNode(int val);
	
	void printList();






};