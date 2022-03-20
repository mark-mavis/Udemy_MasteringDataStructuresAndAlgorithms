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

void RecursiveFunction1(int n) {
	if (n > 0) {
		printf("%d\n", n);
		RecursiveFunction1(n - 1);
	}
}

void RecursiveFunction2(int n) {
	if (n > 0) {
		RecursiveFunction2(n - 1);
		printf("%d\n", n);
	}
}


int main() {

	int x = 3;
	RecursiveFunction1(x);
	RecursiveFunction2(x);



	return 0;
}