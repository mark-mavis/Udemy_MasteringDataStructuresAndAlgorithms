#include "jump-search.h"
#include <iostream>
#include <algorithm>
#include <cmath>



int JumpSearch(int* arr, int size, int key)
{
	// Finding block size to be jumped
	int step = (int)std::sqrt(size);

	// Finding the block where element is
	// present (if it is present)
	int prev = 0;
	while (arr[std::min(step, size) - 1] < key)
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
		if (prev == std::min(step, size)) {
			printf("Jump Search did not find element\n");
			return -1;
		}
	}
	// If element is found
	if (arr[prev] == key) {
		printf("Jump Search found element at Index: %d\n", prev);
		return prev;
	}
	return -1;
}