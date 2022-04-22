#include "LinkedList.h"
#include <string>
#include <iostream>

//List Node Definitions
ListNode::ListNode(int val = 0) : m_value{ val }, _next{ NULL } {}
int ListNode::getNodeVal() { return m_value; }
void ListNode::setNodeVal(int val) { m_value = val; }

//Linked List Definition
LinkedList::LinkedList() { head = NULL; }

void LinkedList::addNode(int val) {
	/*	Two Cases in Adding Nodes
	*	
	*	Case 1: Empty List
	*	Case 2: Non-Empty List
	*/

	/* Case 1: Empty List	*/
	ListNode* newNode = new ListNode{ val };
	if (head == NULL) {
		head = newNode;
	}
	/* Case 2: Non-Empty List	*/
	else {
		ListNode* endNode = traverseListToEnd();
		endNode->_next= newNode;
	}
}
void LinkedList::deleteNode(int val) {
	/*Two cases in deleting nodes*/
	/*
	*	Case 1: Delete Head Node
	*	Case 2: Delete Node from rest of list
	*/
	ListNode* cur = head;
	ListNode* prev = NULL;
	ListNode* temp;
	
	/*	First Case: Deleting the head node	*/
	if (cur->m_value == val && prev == NULL) {
		temp = cur;
		head = cur->_next;
		printf("Deleting Head Node Value %d\n", temp->m_value);
		delete temp;
		temp = NULL;
	}
	/*	Second Case: Deleting Node from rest of list	*/
	else {
		prev = head;
		while (cur) {
			cur = cur->_next;
			if (cur->m_value == val) {
				prev->_next = cur->_next;
				printf("Deleting Node Value %d\n", cur->m_value);
				delete cur;
				cur = NULL;
			}
			else {
				prev = prev->_next;
			}
		}
	}
};
void LinkedList::printListTailRecursion(ListNode* node) {
	
	if (node) {
		printf("%d\n", node->m_value);
		printListTailRecursion(node->_next);
	}
}
void LinkedList::printListHeadRecursion(ListNode* node) {

	if (node) {
		printListHeadRecursion(node->_next);
		printf("%d\n", node->m_value);
	}
}
void LinkedList::countNodes(ListNode* node) {
	int count{0};
	while (node) {
		count++;
		node = node->_next;
	}
	std::cout << "Number of nodes: " << count << std::endl;
}
void LinkedList::sumOfNodes(ListNode* node){
	int sum{0};
	while (node) {
		sum += node->m_value;
		node = node->_next;
	}
	std::cout << "Sum of nodes: " << sum << std::endl;
}
void LinkedList::maxValueInList(ListNode* node){
	int max{ INT32_MIN };
	while (node) {
		if (node->m_value > max) max = node->m_value;
		node = node->_next;
	}
	std::cout << "Max Value: " << max << std::endl;
}
ListNode* LinkedList::returnHead() { return head; }
ListNode* LinkedList::traverseListToEnd() {
	ListNode* ptr = head;
	while (ptr->_next != NULL) {
		ptr = ptr->_next;
	}
	return ptr;
}
ListNode* LinkedList::search(int val) {
	ListNode* temp = head;
	while (temp != NULL) {
		if (temp->m_value == val) {
			printf("Value %d found at Address %p\n", val, temp);
			return temp;
		}
		temp = temp->_next;
	}
	std::cout << "There is no node with that value" << std::endl;
	return NULL;
};



