#include "Rectangle.hpp"


void AddToMeasurement(rectangle& r, float addedlength, float addedwidth);
void ReadArea(const rectangle& r);

int main() {
	uint8_t a = 10;
	uint8_t& reference = a;	//Takes the memory address of a

	printf("Value: %d\n", reference);
	reference++;
	printf("Value: %d\n", reference);

	// USING POINTER SYNTAX
	struct rectangle* masterpointer = new rectangle{ 12.5f, 15.64f };
	masterpointer->ReadDimensions();
	masterpointer->Area();
	masterpointer->length += 1.24;
	masterpointer->width -= 4.99;
	masterpointer->ReadDimensions();
	masterpointer->Area();


	// USING REFERENCE SYNTAX
	struct rectangle rect{ 12.5f, 15.64f };	//Adding to the Rectangle	
	rectangle& Box1 = rect;					//Assigning Reference
	
	Box1.ReadDimensions();					//Reading Area
	Box1.Area();
	
	AddToMeasurement(Box1, 1.23f, 4.23f);	//Passing the Reference of the object to add to
	
	Box1.ReadDimensions();
	Box1.Area();							//Reading Area
	AddToMeasurement(rect, -4.55f, -3.22f);
	ReadArea(rect);
	ReadArea(Box1);						//Passing In a reference to The Rectange Obj through 
										//the Box Reference Name

	rectangle* r = &Box1;
	r->length += 7.32;
	(*r).length = 19;	//Can use this syntax	(*r).
	r->width += 12.42;	//Or this syntax		r->
	r->Area();
	delete masterpointer;
	masterpointer = NULL;
	return 0;
}


//Outside function that resizes a rectangle
void AddToMeasurement(rectangle& r, float addedlength, float addedwidth) {
	std::cout << "Global Function Adding: " << "(" << addedlength << ", " << addedwidth << ")" << std::endl;

	r.length += addedlength;
	r.width += addedwidth;
}

//Outside function that reads the area of a rectangle
void ReadArea(const rectangle& r) {

	std::cout << "Global Function Reading the Rectangle" << "(" << r.width << ", " << r.length << std::endl;
	std::cout << "Dimensions: " << "(" << r.width << ", " << r.length << std::endl;
	std::cout << "Area: " << r.width * r.length << std::endl;
}