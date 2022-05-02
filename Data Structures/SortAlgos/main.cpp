#include "ArrayCreator.h"
#include "SortingAlgorithms.h"


int main() {

	//ArrayCreator SelectionSortArray(10);
	//SelectionSortArray.Print();

	//SelectionSort(SelectionSortArray);
	

	ArrayCreator BubbleSortArray(10);
	BubbleSortArray.Print();
	BubbleSort(BubbleSortArray);

	return 0;
}