#include "passing_arrays.h"
#include <iostream>

int* returnArray(int size) {
	short int arrayWidth = (int)size + 1;
	int count = 0;
	int* heapArray = new int[arrayWidth] {0};
	for (int* hp=heapArray; count < arrayWidth; hp++) {
		*hp = count;
		count++;
	}
	return heapArray;
}
void sizeofArray(int *A) {
	int size = 0;
	for (int i = 0; A[i] != 0; ++i) {
		std::cout << A[i] << std::endl;
		++size;
	}
	std::cout << "Array Size: " << size * sizeof(int) + sizeof(int) << " Bytes" << std::endl;
	

}
