#pragma once
class Rectangle {
	float height;
	float width;

public:
	Rectangle();
	Rectangle(float h, float w);
	~Rectangle();
	float Area();
	void DeclareArea();
	float Parameter();
	void DeclareParameter();
	float GetLength();
	float GetWidth();
	void Resize(float nHeight, float nWidth);

};

