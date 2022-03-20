#include "Generic_template.hpp"
#include <iostream>

int main() {

	Generic_template<int> intTemp(10, 14);
	Generic_template<float> floatTemp(3.4f, 5.6f);
	Generic_template<char> charTemp(35, 35);
	
	std::cout << intTemp.add() << std::endl;
	std::cout << floatTemp.add() << std::endl;
	std::cout << (char)charTemp.add() << std::endl;


	return 0;
}