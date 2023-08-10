#include "indirect-recursion.h"
#include <iostream>

void FunctionA(int n) {
	if (n > 0) {
		printf("%d", n);
		FunctionB(n - 1);
	}
}

void FunctionB(int n) {
	if (n > 1) {
		printf("%d", n);
		FunctionA(n / 2);
	}
}