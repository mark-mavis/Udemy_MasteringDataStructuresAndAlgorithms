#include "SortingAlgorithms.h"
void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}


void BubbleSort_Recursive(int* arr, int size) {
	
	if (size == 1) {
		return;
	}

	for (int i = 0; i < size - 1; i++) {
		if (arr[i] > arr[i + 1]) {
			swap(&arr[i], &arr[i + 1]);
		}
		Print(arr, size);
		BubbleSort_Recursive(arr, size - 1);
	}
}