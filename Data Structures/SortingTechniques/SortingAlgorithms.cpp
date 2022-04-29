#include <iostream>
#include <string>
#include "SortingAlgorithms.h"


int LinearSearchHelper(int* arr, int size, int key) {
	int i = 0; 
	for (; *arr != 0; ++arr) {
		printf("Checking Key %d : Value %d", key, *arr);
		if (key == *arr) {
			printf(" : Equal!");
			printf(" Element %d found at index: %d\n", *arr, i);
			return 1;
		}
		printf(" : Not Equal\n");
		++i;
	}
	printf("Element not found\n");
	return -1;
}
void LinearSearch() {
	int size = 0;
	int searchKey = 0;

	printf("Conducting Linear Search\n");
	printf("Create Array....\n");
	printf("Size:...");
	std::cin >> size;
	int* ap = new int[size+1] {};

	for (int i = 0; i < size; i++) {
		printf("Enter Value for index %d: ", i);
		std::cin >> ap[i];
	}
	 
	printf("Enter value to search for....");
	std::cin >> searchKey;

	LinearSearchHelper(ap, size, searchKey);
	delete[]ap;
}


void BubbleSort() {
	std::cout << "Calling Bubble sort..." << std::endl;

}