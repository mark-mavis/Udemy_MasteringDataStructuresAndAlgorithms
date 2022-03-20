#pragma once

#ifndef CARD_HPP	
#define CARD_HPP

#include <iostream>
struct Card {
	uint8_t rank;	//1-14
	uint8_t suit;	//1-4
	uint8_t color;	//1-4

	void readCardInfo() {
		std::cout << "Rank: " << rank << "Suit: " << suit << std::endl;
	}
};

#endif



