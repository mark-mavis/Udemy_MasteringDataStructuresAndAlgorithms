#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle() {
		this->height = 1.0f;
		this->width = 1.0f;
}
Rectangle::Rectangle(float h, float w) {
	if (h > 0 && w > 0) {
		this->height = h;
		this->width = w;
	}
	else {
		this->height = 1;
		this->width = 1;
	}
}
Rectangle::~Rectangle() {};
float Rectangle::Area() {
	return height * width;
}
void Rectangle::DeclareArea() {
	std::cout << "My Area is: " << width * height << std::endl;
}
float Rectangle::Parameter()
{
	return 2*(height+width);
}
void Rectangle::DeclareParameter()
{
	std::cout << "My Perimeter is: " << 2 * (height + width) << std::endl;
}
float Rectangle::GetLength()
{
	return width;
}
float Rectangle::GetWidth()
{
	return width;
}
void Rectangle::Resize(float nHeight, float nWidth) {
	this->height = nHeight;
	this->width = nWidth;
}