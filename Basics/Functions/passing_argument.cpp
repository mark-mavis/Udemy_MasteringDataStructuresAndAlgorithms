#include <iostream>

void add(int x, int y) {
	std::cout << "Add by Value: " << x + y << std::endl;
}
void addPointer(int* a, int* b) {
	std::cout << "Add by Pointer Sum: " << *a+*b << std::endl;
}
void addReference(int& a, int& b) {
	std::cout << "Add by Reference Sum: " << a+b << std::endl;
}
void swapValue(int& a, int& b) {
	std::cout << "Before Swap: " << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	
	int temp = a;
	a = b;
	b = temp;

	std::cout << "After Swap: " << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
}
void printValue(int& a, int& b) {
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
}