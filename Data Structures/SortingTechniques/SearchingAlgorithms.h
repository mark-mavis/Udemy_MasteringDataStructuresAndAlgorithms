#pragma once

int BinarySearch(int* arr, int left, int right, int key);
int LinearSearch(int* arr, int size, int key);
int JumpSearch(int* arr, int key, int size);
int InterpolationSearch(int* arr, int lo, int hi, int key);
int ExponentialSearch(int* arr, int key, int size);

void SearchController(int* ap, int size);
void ArrayCreator();




void BubbleSort();
void InsertionSort();
void SelectionSort();
void HeapSort();
void MergeSort();
void QuickSort();
void Quicksort();
void TreeSort();
void ShellSort();
void CountSort();
void BucketSort();
void RadixSort();