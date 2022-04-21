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
	ListNode* newNode = new ListNode{ val };
	if (head == NULL) {
		head = newNode;
	}
	else {
		ListNode* endNode = traverseListToEnd();
		endNode->_next= newNode;
	}
}
void LinkedList::deleteNode(int val) {
	ListNode* cur = head;
	ListNode* prev = NULL;
	ListNode* temp;
	while (cur != NULL) {
		if (cur->m_value == val && prev == NULL) {
			temp = cur;
			head = cur->_next;
			printf("Deleting Value %d\n", temp->m_value);
			delete temp;
			temp = NULL;
		}
		else {
			cur = cur->_next;
			prev = head;
			while (cur->m_value != val) {
				ListNode* temp = cur;
				cur = cur->_next;
				prev->_next = cur;
				delete temp;
				temp = NULL;
				break;
			}
			else {
				prev = prev->_next;
			}
		}	
	}
};

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
			//printf("Value %d found at Address %p\n", val, temp);
			return temp;
		}
		temp = temp->_next;
	}
	//std::cout << "There is no node with that value" << std::endl;
	return NULL;
};
//void printList() {}


