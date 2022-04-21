#include "LinkedList.h"
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

	linkedList.deleteNode(3);
	linkedList.deleteNode(1);



}