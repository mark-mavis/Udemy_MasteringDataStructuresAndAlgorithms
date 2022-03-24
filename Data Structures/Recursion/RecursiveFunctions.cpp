#pragma once
#include "RecursiveFunctions.h"

#ifndef	RECURSIVEFUNCTIONS_CPP
#define	RECURSIVEFUNCTIONS_CPP

//=======================================================================
// RECURSION
/*
*	What is a Recursive Function?
*		- It is a function that calls itself
*
*
*	returnType	Function (parameter){
*		if(base condition)
*			stop and return
*		else
*			call recursive function again
*/

//==================================================================================
//HEAD RECURSION
//==================================================================================
void RecursiveFunction_Ascending(int n) {
	//Function that prints before the recursive function is called
	if (n > 0) {
		printf("%d\n", n);
		RecursiveFunction_Ascending(n - 1);
	}
}

//==================================================================================
//TAIL RECURSION
//==================================================================================
void RecursiveFunction_Descending(int n) {
	//Function that prints the value of n, when the previous function call returns.
	// Printing happens in return, as the activation record stack snaps back downward. 
	if (n > 0) {
		RecursiveFunction_Descending(n - 1);
		printf("%d\n", n);
	}
}

int RecursiveFunction_StaticVariable(int n) {

	static int x = 10;	//Static Variable is created and maintained through out the Recursive call

	if (n > 0) {

		x++;	//Increments X by 1
		return RecursiveFunction_StaticVariable(n - 1) + x;		//Adds X to the Returning Value of X
	}
	return 0;
}
int RecursiveFunction_GlobalVariable(int n) {

	int x = 10;		//Global Variable is created in each call, so it affects each activation record individually
					// - All stack frames or activiation records has its own copy of x
					// - Adds 11 each time

	if (n > 0) {

		x++;	//Increments X by 1

		//Return X(n-1) + X
		return RecursiveFunction_GlobalVariable(n - 1) + x;		//Adds X (11) to the Returning Value of X
																// Adds X in a decending format
	}
	return 0;
}

bool isPalindrome(std::string input, bool clearWhiteSpace) {
	
	//Deleting Whitespace
	if (clearWhiteSpace) input.erase(std::remove_if(std::begin(input), std::end(input), isspace), input.end());
	
	//Define the base case/stopping condition
	// What is the absolut smallest case that could be passed into this function?
	// "" and a string of length 1 are both the smallest case
	if (input.length() == 0 || input.length() == 1) {
		return true;
	}

	//If the values at either end are equal
	if (input.at(0) == input.at(input.length() - 1)) {

		//Slim down the original string passed in
		return isPalindrome(input.substr(1, input.length()-2), false);
	}

	return false;
}

std::string DecimalToBinary(int number) {
	if (number == 1) {
		return "1";
	}
	auto digit = (number%2 == 0)? "0":"1";
	return DecimalToBinary(number / 2) + digit;
}
std::string reverseString(std::string input) {
	if (input == "" || input.size() == 1) {
		return input;
	}
	else {
		return reverseString(input.substr(1, input.length()-1 )) + input.at(0);
		
	}
};
int sumOfNaturalNumbers(int num) {
	if (num == 0) {
		return 0;
	}
	return sumOfNaturalNumbers(num - 1) + num;


}

int binaryArraySearch(int A[], int left, int right, int key) {

	if (left > right) return -1;	//The array numbers are reversed

	//Find the middle of the Array
	int midIdx = (left + right) / 2;


	if (A[midIdx] == key) {	//Found the key
		return midIdx;
	}

	//If the Key is Less then middle value, shorten the top end
	if (key < A[midIdx]) binaryArraySearch(A, left, midIdx - 1, key);

	//If the Key is Greater then middle value, extend the beginning
	return binaryArraySearch(A, midIdx + 1, right, key);




};



#endif // !

