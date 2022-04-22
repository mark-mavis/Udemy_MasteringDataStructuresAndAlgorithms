#pragma once
class ListNode {
private:
	int m_value;
	ListNode* _next;
public:
	ListNode(int val);
	int getNodeVal();
	void setNodeVal(int val);

	friend class LinkedList;
};

class LinkedList {
private:
	ListNode* head;

public:
	LinkedList();
	void addNode(int val);
	void deleteNode(int val);
	void printListTailRecursion(ListNode* node);
	void printListHeadRecursion(ListNode* node);
	void countNodes(ListNode* node);
	void sumOfNodes(ListNode* node);
	void maxValueInList(ListNode* node);
	ListNode* returnHead();
	ListNode* traverseListToEnd();
	ListNode* search(int val);
};