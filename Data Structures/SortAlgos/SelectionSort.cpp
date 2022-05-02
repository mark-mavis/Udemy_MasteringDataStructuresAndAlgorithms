#include "SortingAlgorithms.h"

void SelectionSort(ArrayCreator& arr) {
	int i{}, j{}, minIdx{};
	int* ap = arr.GetArr();
	int size = arr.GetSize();
	for (i = 0; i < size - 1; i++) {
		minIdx = i;
		for (j = i + 1; j < size; j++) {
			if (ap[j] < ap[i]) {
				int temp = ap[i];
				ap[i] = ap[j];
				ap[j] = temp;
			}
		}
	}
}

