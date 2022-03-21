#include <iostream>
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

//Basic Implementation of Recursion to return a sentence
std::string StringC() {
	return "friends";
}
std::string StringB() {
	return "my " + StringC();
}
std::string StringA() {
	return "hello " + StringB();
}


int main() {

	int x = 3;
	RecursiveFunction_Ascending(x);
	RecursiveFunction_Descending(x);

	int r;
	r = RecursiveFunction_StaticVariable(5);
	printf("%d\n", r);

	r = RecursiveFunction_GlobalVariable(5);
	printf("%d\n", r);

	StringA();

	return 0;
}