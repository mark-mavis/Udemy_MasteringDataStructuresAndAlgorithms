#include "LinkedList.h"
#include <iostream>

int main() {
	LinkedList linkedList;
	linkedList.deleteNode(3);
	linkedList.insertNodeAtPosition(10, 2);
	linkedList.addNode(1);
	linkedList.addNode(2);
	linkedList.addNode(3);
	linkedList.addNode(4);
	linkedList.addNode(5);

	linkedList.search(1);
	linkedList.search(2);
	linkedList.search(3);
	linkedList.search(4);
	linkedList.search(5);
	linkedList.search(9);		//Out of Bounds Testing Case: value doesn't exist
	

	linkedList.deleteNode(3);
	linkedList.deleteNode(2);
	linkedList.deleteNode(1);
	linkedList.deleteNode(7);	//Testing case: value doesn't exist

	linkedList.printListTailRecursion(linkedList.returnHead());
	
	//linkedList.printListHeadRecursion(linkedList.returnHead());
	linkedList.countNodes(linkedList.returnHead());
	linkedList.sumOfNodes(linkedList.returnHead());
	linkedList.maxValueInList(linkedList.returnHead());
	
	linkedList.insertNodeAtPosition(10, 1);
	linkedList.printListTailRecursion(linkedList.returnHead());

	linkedList.insertNodeAtPosition(20, 1);
	
	linkedList.printListTailRecursion(linkedList.returnHead());
	
	linkedList.insertNodeAtPosition(14, 3);
	linkedList.printListTailRecursion(linkedList.returnHead());

	linkedList.insertNodeAtPosition(26, 5);
	linkedList.printListTailRecursion(linkedList.returnHead());
	printf("\n");
	
	linkedList.insertNodeAtPosition(100, 12);	//Position Out of Bounds
	linkedList.insertNodeAtPosition(100, -7);	//Position can't be negative

	linkedList.insertNodeAtPosition(100, 7);
	linkedList.printListTailRecursion(linkedList.returnHead());

	return 0;

}