#include<iostream>

void printArray(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		std::cout << arr[i];
		if (i < (size-1)) std::cout << " ";
	}
	std::cout << std::endl;
}

void initialArray(int &arr, int size) {
	std::cout << "Please enter " << size << " values" << std::endl;
	for (int i = 0; i < size; i++) {
		std::cin >> arr;
		arr++;
	}
}



int main() {

	int arr01[5];
	
	//Initializing Array with string literals
	arr01[0] = 12;	// <----string literal
	arr01[1] = 16;
	arr01[2] = 9;
	arr01[3] = 3;
	arr01[4] = 67;


	int arr03[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	std::cout << sizeof(arr03) << " bytes" << std::endl;

	//No need to enter the size in direct initialization
	char str[] = "abc";

	//Direct Initialization
	int arr04[10]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	printArray(arr04, 10);

	int size;
	std::cout << "How big of an array do you want?" << std::endl;
	std::cin >> size;
	int* A = new int[size];
	initialArray(*A, size);



	return 0;
}