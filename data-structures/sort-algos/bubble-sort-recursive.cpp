#include "bubble-sort-recursive.h"


void Swap(int* a, int* b) {
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
			Swap(&arr[i], &arr[i + 1]);
		}
		BubbleSort_Recursive(arr, size - 1);
	}
}