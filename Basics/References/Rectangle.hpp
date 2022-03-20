#pragma once

#include<iostream>
struct rectangle {

	//value range -32,768 to 32,767
	float width;
	float length;

	void Area() {
		std::cout << "Area: " << width * length << std::endl;
	}
	void Resize(float delta_w, float delta_h) {
		std::cout << "Resizing Width: " << std::endl;
		width += delta_w;
		std::cout << "Resizing Length: " <<length << std::endl;
		length += delta_h;
	}
	void ReadDimensions() {
		std::cout << "Current Length:" << length << std::endl;
		std::cout << "Current Width:" << width << std::endl;
	}
};