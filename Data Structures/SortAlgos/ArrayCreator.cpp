
#include "ArrayCreator.h"
#include <iostream>

ArrayCreator::ArrayCreator(int sz) : size{ sz } {
	
	arr = new int[sz];
	std::srand(std::time(nullptr));		//using the current time as the seed for the random generator
	for (int i = 0; i < sz; i++) {
		arr[i] = std::rand() % 1000;
	}
}
ArrayCreator::~ArrayCreator() { delete[]arr; }
int ArrayCreator::GetSize() { return size; }
int* ArrayCreator::GetArr() { return arr; }
void ArrayCreator::Print() {
	printf("[");
	for (int i = 0; i < size; i++) {
		printf("%d", arr[i]);
		if (i < size - 1) {
			printf(", ");
		}
	}
	printf("]\n");
}