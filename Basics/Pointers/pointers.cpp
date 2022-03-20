/*
	There are 3 sections in main memory
		3. Heap
		2. Stack
		1. Code Section

	The Program can directly access the code section and the Stack section
	The Program CAN NOT directly the access the Heap section. We need the pointer
		to access the heap memory

	Pointers are used to access the resources outside the code section and the
	stack section. This include Heap, external storage areas, Peripherials, 
	LAN etc.

	Pointers are also used for parameter passing


	//data variable
	int a = 10;

	pointer to the address of the variable
	int* a = &a
*/

#include <iostream>

void ReadPointerInfo(int* int_pointer);
void ReadUint8Array(uint8_t* arr);

int main() {

	int* int_pointer = new int(5);
	ReadPointerInfo(int_pointer);
	delete int_pointer;		//Because this exists on the heap, delete it from the heap

	int int_num{ 19 };
	ReadPointerInfo(&int_num);

	//Retrieving area from Heap (10 ints)
	int* subArray = (int*)malloc(10 * sizeof(int));

	uint8_t* intarr_pointer = new uint8_t[5]{77, 65, 82, 75, 0};
	uint8_t* intarr_startingAddress = intarr_pointer;

	ReadUint8Array(intarr_pointer);

	intarr_pointer = intarr_startingAddress;
	delete[] intarr_pointer;	//Deleting values in this block
	intarr_pointer = NULL;



	uint8_t* newArray = new uint8_t[5]{ 12, 65, 64, 54, 92 };
	uint8_t* newArrayMidPointer = &newArray[2];
	uint8_t* newArrayEnd = &newArray[4];

	delete[] newArray;
	newArray = NULL;

	std::cout << "newArray Start: " << &newArray << std::endl; 
	std::cout << "newArrayMiddle: " << &newArrayMidPointer << std::endl;
	std::cout << "newArrayEnd: " << &newArrayEnd << std::endl;


	return 0;
}

void ReadPointerInfo(int* int_pointer) {
	std::cout << "Stack Memory Address of pointer: " << &int_pointer << std::endl;
	std::cout << "Heap Memory Address of Value: " << int_pointer << std::endl;
	std::cout << "Value Held at This Address: " << *int_pointer << std::endl;
}
void ReadUint8Array(uint8_t* arr) {

	auto address = arr;
	for (uint8_t* i = arr; *i != NULL; i++) {
		std::cout << *i;
	}
	std::cout << std::endl;
	arr = address;

	int count = 0;
	for (uint8_t* i = arr; *i != NULL; i++) {
		std::cout << i[count];	//Points can be accessed with bracket notation
	}
	std::cout << std::endl;
};