#include "NestedRecursion.h"

/*
	NESTED RECURSION

	Nested Recursion is where a function takes a recursive call as a parameter

*/

int NestedRecursion(int n) {
	if (n > 100) {
		return n - 10;
	}
	else {
		return NestedRecursion(NestedRecursion(n + 11));
	}
}
