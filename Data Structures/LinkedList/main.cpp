#include "LinkedList.h"
#include <string>

int main() {
	LinkedList linkedList;
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

	//linkedList.deleteNode(3);
	//linkedList.deleteNode(2);
	//linkedList.deleteNode(1);

	linkedList.printListTailRecursion(linkedList.returnHead());
	linkedList.printListHeadRecursion(linkedList.returnHead());
	linkedList.countNodes(linkedList.returnHead());
	linkedList.sumOfNodes(linkedList.returnHead());
	linkedList.maxValueInList(linkedList.returnHead());





}