#include <iostream>
#include <string>
#include "SearchingAlgorithms.h"




int LinearSearch(int* arr, int size, int key) {
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
int BinarySearch(int* arr, int left, int right, int key) {
	if (right >= 1) {
		int midIdx = left + (right - left) / 2;
		printf("MidIdx: %d Value at MidIdx: %d Key: %d\n", midIdx, arr[midIdx], key);
		if (key == arr[midIdx]) {
			return midIdx;
		}
		if (key < arr[midIdx]) {
			printf("LeftIdx: %d Left Val: %d RightIdx: %d Right Val: %d\n", left, arr[left], right, arr[right]);
			return BinarySearch(arr, left, midIdx - 1, key);
		}
		else {
			printf("LeftIdx: %d Left Val: %d RightIdx: %d Right Val: %d\n", left, arr[left], right, arr[right]);
			return BinarySearch(arr, midIdx + 1, right, key);
		}
	}
	return -1;
}

void JumpSearch() {
	std::cout << "Jumpsearch" << std::endl;
}

void ArrayCreator() {
	int size = 0;
	int searchKey = 0;

	printf("Conducting Linear Search\n");
	printf("Create Array....\n");
	printf("Size:...");
	std::cin >> size;
	int* ap = new int[size + 1]{};

	for (int i = 0; i < size; i++) {
		printf("Enter Value for index %d: ", i);
		std::cin >> ap[i];
	}

	printf("Enter value to search for....");
	std::cin >> searchKey;

	LinearSearch(ap, size, searchKey);
	BinarySearch(ap, 0, size - 1, searchKey);

	delete[]ap;
}
