#include "interpolation-search.h"
#include <iostream>

int InterpolationSearch(int* arr, int lo, int hi, int key) {
	int pos = 0;

	// Since array is sorted, an element present
	// in array must be in range defined by corner
	if (lo <= hi && key >= arr[lo] && key <= arr[hi]) {

		// Probing the position with keeping
		// uniform distribution in mind.
		pos = lo + (((hi - lo) / (arr[hi] - arr[lo])) * (key - arr[lo]));

		// Condition of target found
		if (arr[pos] == key)
			printf("Interpolation Search found element at Index: %d\n", pos);
			return pos;

		// If x is larger, x is in right sub array
		if (arr[pos] < key)
			return InterpolationSearch(arr, pos + 1, hi, key);

		// If x is smaller, x is in left sub array
		if (arr[pos] > key)
			return InterpolationSearch(arr, lo, pos - 1, key);
	}
	printf("Interpolation did not find element at Index: %d\n", pos);
	return -1;
}