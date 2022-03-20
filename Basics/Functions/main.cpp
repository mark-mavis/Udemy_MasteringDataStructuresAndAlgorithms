#include "passing_argument.h"
#include "passing_arrays.h"


int main() {

	int x = 10, y = 5;
	add(x, y);

	int a = 16, b = 24;
	addPointer(&a, &b);
	addReference(a, b);
	swapValue(a, b);

	int* newArray = returnArray(10);
	delete[]newArray;
	newArray = 0;

	int arr[6]{ 12, 41, 32, 11, 34, 0};
	sizeofArray(arr);
	


	return 0;
}