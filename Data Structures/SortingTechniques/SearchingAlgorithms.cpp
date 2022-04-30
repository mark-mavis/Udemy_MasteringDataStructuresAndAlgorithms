#include <iostream>
#include <string>
#include "SearchingAlgorithms.h"
#include <Bits.h>

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
int BinarySearch(int* arr, int leftIdx, int rightIdx, int key) {
	if (rightIdx >= 1) {
		int midIdx = leftIdx + (rightIdx - leftIdx) / 2;
		printf("LeftIdx: %d MidIdx: %d RightIdx: %d\n", leftIdx, midIdx, rightIdx);
		if (key == arr[midIdx]) {
			printf("Element found at Index: %d", midIdx);
			return midIdx;
		}
		if (key < arr[midIdx]) {
			printf("LeftIdx: %d RightIdx: %d\n", leftIdx, midIdx - 1);
			return BinarySearch(arr, leftIdx, midIdx - 1, key);
		}
		else {
			printf("LeftIdx: %d RightIdx: %d\n", midIdx + 1, rightIdx);
			return BinarySearch(arr, midIdx + 1, rightIdx, key);
		}
	}
	return -1;
}
int JumpSearch(int* arr, int size, int key)
{
	// Finding block size to be jumped
	int step = (int)sqrt(size);

	// Finding the block where element is
	// present (if it is present)
	int prev = 0;
	while (arr[min(step, size) - 1] < key)
	{
		prev = step;
		step += (int)sqrt(size);
		if (prev >= size)
			return -1;
	}

	// Doing a linear search for x in block
	// beginning with prev.
	while (arr[prev] < key)
	{
		prev++;

		// If we reached next block or end of
		// array, element is not present.
		if (prev == min(step, size))
			return -1;
	}
	// If element is found
	if (arr[prev] == key) {
		return prev;
	}
	return -1;
}
int InterpolationSearch(int* arr, int lo, int hi, int key) {
	int pos;

	// Since array is sorted, an element present
	// in array must be in range defined by corner
	if (lo <= hi && key >= arr[lo] && key <= arr[hi]) {

		// Probing the position with keeping
		// uniform distribution in mind.
		pos = lo + (((double)(hi - lo) / (arr[hi] - arr[lo])) * (key - arr[lo]));

		// Condition of target found
		if (arr[pos] == key)
			return pos;

		// If x is larger, x is in right sub array
		if (arr[pos] < key)
			return InterpolationSearch(arr, pos + 1, hi, key);

		// If x is smaller, x is in left sub array
		if (arr[pos] > key)
			return InterpolationSearch(arr, lo, pos - 1, key);
	}
	return -1;
}
int ExponentialSearch(int* arr, int key, int size) {
	// If x is present at first location itself
	if (arr[0] == key)
		return 0;

	// Find range for binary search by
	// repeated doubling
	int i = 1;
	while (i < size && arr[i] <= key)
		i = i * 2;

	//  Call binary search for the found range.
	return BinarySearch(arr, i / 2, min(i, size - 1), key);
}

void SearchController(int* ap, int size) {
	int searchKey = 0;
	printf("Enter value to search for....");
	std::cin >> searchKey;

	LinearSearch(ap, size, searchKey);
	BinarySearch(ap, 0, size - 1, searchKey);
	JumpSearch(ap, size, searchKey);
	InterpolationSearch(ap, 0, 24, searchKey);
}


void ArrayCreator() {
	int size = 25;
	
	//Dynamically created array
	/*
	printf("Create Array....\n");
	printf("Size:...");
	std::cin >> size;
	int* ap = new int[size + 1]{};
	
	for (int i = 0; i < size; i++) {
		printf("Enter Value for index %d: ", i);
		std::cin >> ap[i];
	}*/

	int* ap = new int[] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25};

	SearchController(ap, size);

	delete[]ap;
}
