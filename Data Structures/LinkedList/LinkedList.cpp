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
}
void LinkedList::deleteNode(int val) {};
ListNode* LinkedList::findNode(int val) {};
void printList() {}


