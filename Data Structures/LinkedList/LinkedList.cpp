#include "LinkedList.h"
#include <string>
#include <iostream>

//List Node Definitions
ListNode::ListNode(int val = 0) : m_value{ val }, _next{ NULL } {}
int ListNode::getNodeVal() { return m_value; }
void ListNode::setNodeVal(int val) { m_value = val; }

//Linked List Definition
LinkedList::LinkedList() { head = NULL; m_count = 0; }
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
		addListCount(newNode);
	}
	/* Case 2: Non-Empty List	*/
	else {
		ListNode* endNode = traverseListToEnd();
		endNode->_next= newNode;
		addListCount(newNode);
	}
}
void LinkedList::addListCount(ListNode* node) { 
	m_count++; 
	std::cout << "\n";
	std::cout << "Adding: " << node->m_value << std::endl;
	std::cout << "List Count: " << getListCount() << std::endl; 
}
void LinkedList::subtractCount() { m_count--; }
int LinkedList::getListCount() { return m_count; }

void LinkedList::insertNodeAtPosition(int val, int position) {
	/*	2 Cases in inserting Nodes into list at given position
	*	1. Insert node before first position
	*	2. Insert after given position.
	*/
	if (head && position >= 0 && (position <= (getListCount() + 1)) ) {	//checking for 
		ListNode* newNode = new ListNode{ val };
		if (position == 1) {
			newNode->_next = head;
			head = newNode;
			addListCount(newNode);
		}
		else {
			int count{ 1 };
			ListNode* cur = head->_next;
			ListNode* prev = head;

			while (count < position) {
				count++;
				//cur = head->_next;
				if (count < position) {
					cur = cur->_next;
					prev = prev->_next;
				}else if(!cur) {
					prev->_next = newNode;
					addListCount(newNode);
				}
				else {
					newNode->_next = cur;
					prev->_next = newNode;
					addListCount(newNode);
				}
			}
		}
	}
	else {
		std::cout << "Position does not exist or invalid negative position" << std::endl;
	}
}
void LinkedList::deleteNode(int val) {
	/*Two cases in deleting nodes*/
	/*
	*	Case 1: Delete Head Node
	*	Case 2: Delete Node from rest of list
	*/
	if (head && search(val)) {
		ListNode* cur = head;
		ListNode* prev = NULL;
		ListNode* temp;

		/*	First Case: Deleting the head node	*/
		if (cur->m_value == val && prev == NULL) {
			temp = cur;
			head = cur->_next;
			printf("Deleting Head Node Value %d\n", temp->m_value);
			subtractCount();
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
					subtractCount();
					delete cur;
					cur = NULL;
				}
				else {
					prev = prev->_next;
				}
			}
		}
	}
	else {
		std::cout << "Empty List Or Value Doesn't Exist!" << std::endl;
	}
};
void LinkedList::printListTailRecursion(ListNode* node) {
	
	if (node) {
		printf("%d ->", node->m_value);
		printListTailRecursion(node->_next);
		
	}
}
void LinkedList::printListHeadRecursion(ListNode* node) {

	if (node) {
		printListHeadRecursion(node->_next);
		printf("%d ->", node->m_value);
	}
	
}
void LinkedList::countNodes(ListNode* node) {
	int count{0};
	while (node) {
		count++;
		node = node->_next;
	}
	std::cout << "\nNumber of nodes: " << count << std::endl;
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

/*
void LinkedList::sortedListAscending() {
	ListNode* prev = head;
	ListNode* cur = head;
	for (int i = 0; i < getListCount(); i++) {
		while (cur != NULL) {
			cur = cur->_next;
			if (i == 0 && prev->m_value < cur->m_value) {
				ListNode* temp = cur->_next;
				cur->_next = head;
				prev->_next = temp;
			}
			else if (prev->m_value < cur->m_value) {
				ListNode* temp = cur->_next;
				cur->_next = head;
				prev->_next = temp;
			}
			prev = prev->_next;
		}
	}
}
*/

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



