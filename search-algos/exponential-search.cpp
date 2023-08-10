#include "exponential-search.h"
#include "binary-search.h"
#include <iostream>
#include <algorithm>


int ExponentialSearch(int* arr, int size, int key) {
	// If x is present at first location itself
	if (arr[0] == key) {
		printf("Exponential Search found element at Index: %d\n", 0);
		return 0;
	}

	// Find range for binary search by
	// repeated doubling
	int i = 1;
	while (i < size && arr[i] <= key) {
		i = i * 2;
	}
		
	//  Call binary search for the found range.
	return BinarySearch(arr, i / 2, std::min(i, size - 1), key);
}