#include "linear-search.h"
#include <iostream>

#ifndef LINEAR_SEARCH_H
#define LINEAR_SEARCH_H

int LinearSearch(int* arr, int size, int search_key) {
	int i = 0; 
	for (; *arr != 0; ++arr) {
		printf("Checking Key %d : Value %d", search_key, *arr);
		if (search_key == *arr) {
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

#endif