#include <iostream>
#include "ComplexNum.hpp"
#include "Card.hpp"
#include "Rectangle.hpp"

#define MAXPLAYERS 4



int main() {
	struct Rectangle A;

	Box.width = 20;
	Box.height = 20;
	std::cout << Box.Area() << std::endl;

	A.height = 20;
	A.width = 20;
	std::cout << "Area of A is: " << A.Area() << std::endl;

	std::cout << "Size of Struct is: " << sizeof(A) << " bytes" << std::endl;

	struct Rectangle B{ 10, 15 };
	std::cout << "Area of B is: " << B.Area() << std::endl;

	ComplexNum term1{ 2.4f, 4.1f };

	Card Ace{ 14, 1, 1 };
	std::cout << "Size of Card Structure: " << sizeof(Ace) << std::endl;

	struct Card deck[52]{ {1,1,1}, {2, 1, 1}};
	std::cout << "Size of Card Deck: " << sizeof(deck) << std::endl;



	return 0;
}