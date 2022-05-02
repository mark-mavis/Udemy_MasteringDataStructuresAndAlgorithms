#pragma once
class ArrayCreator {
	int size{};
	int* arr{};

public:
	ArrayCreator(int sz);
	~ArrayCreator();

	int GetSize();
	int* GetArr();
	void Print();
};