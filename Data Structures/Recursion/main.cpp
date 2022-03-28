#include "RecursiveFunctions.h"

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
	printf("%d\n", RecursiveFunction_StaticVariable(5));
	printf("%d\n", RecursiveFunction_GlobalVariable(5));
	StringA();
	std::cout << isPalindrome("racecar", false) << std::endl;
	std::cout << isPalindrome("x egte etg ex", true) << std::endl;
	std::cout << DecimalToBinary(567) << std::endl;

	std::cout << reverseString("Hello") << std::endl;
	std::cout << sumOfNaturalNumbers(23) << std::endl;

	int A[]{ -1, 0, 1, 2, 3, 4, 7, 9, 10, 20 };
	std::cout << "Index: " << binaryArraySearch(A, 0, 9, 7) << std::endl;
	//std::cout << "Index: " << binaryArraySearch(A, 0, 9, 0) << std::endl;

	std::cout << Fibonacci(6) << std::endl;

	return 0;
}