#include "array-creator.h"
#include "selection-sort.h"
#include "bubble-sort.h"
#include "bubble-sort-recursive.h"


int main() {

	ArrayCreator arr(10);
	//arr.Print();
	
	SelectionSort(arr);
	BubbleSort(arr);

	int arr2[]{ 2, 29, 13, 11, 42, 33, 65, 5, 38, 55, 8, 76 };
	BubbleSort_Recursive(arr2, 12);
	
	return 0;
}