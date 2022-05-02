#include "ArrayCreator.h"
#include "SortingAlgorithms.h"


int main() {

	ArrayCreator arr(10);
	arr.Print();
	
	SelectionSort(arr);


	return 0;
}