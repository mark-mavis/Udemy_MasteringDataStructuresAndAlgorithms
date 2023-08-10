#include "binary-search.h"
#include <iostream>

int BinarySearch(int* arr, int leftIdx, int rightIdx, int key) {
	if (rightIdx >= 1) {
		int midIdx = leftIdx + (rightIdx - leftIdx) / 2;

		std::cout << "LeftIdx: " << leftIdx << " MidIdx: " << midIdx << " RightIdx: " << rightIdx << std::endl;

		if (key == arr[midIdx]) {
			printf("Element found at Index: %d\n", midIdx);
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