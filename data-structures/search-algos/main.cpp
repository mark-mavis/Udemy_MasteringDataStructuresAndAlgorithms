#include "linear-search.h"
#include "binary-search.h"
#include "jump-search.h"
#include "interpolation-search.h"
#include "exponential-search.h"
#include <iostream>


int main() {

	int array[25] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25};
	int* ap = array;

	int search_key = 0;
	int array_size = 25;

	printf("Enter value to search for....");
	std::cin >> search_key;

	LinearSearch(ap, array_size, search_key);
	BinarySearch(ap, 0, array_size - 1, search_key);
	JumpSearch(ap, array_size, search_key);
	InterpolationSearch(ap, 0, array_size-1, search_key);
	ExponentialSearch(ap, array_size, search_key);

	return 0;
}