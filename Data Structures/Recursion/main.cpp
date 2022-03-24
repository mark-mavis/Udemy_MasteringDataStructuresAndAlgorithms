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
	std::cout << DecimalToBinary(5) << std::endl;

	std::cout << reverseString("Hello");

	return 0;
}