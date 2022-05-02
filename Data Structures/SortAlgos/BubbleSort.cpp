#include "SortingAlgorithms.h"
#include <iostream>

void BubbleSort(ArrayCreator& arr) {
	int* ip = arr.GetArr();
	int size = arr.GetSize();
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size-i-1; j++) {
			if (ip[j] > ip[j+1]) {
				int temp = ip[j];
				ip[j] = ip[j+1];
				ip[j+1] = temp;
			}
		}
		printf("Pass %d\n", i);
		arr.Print();
	}
}