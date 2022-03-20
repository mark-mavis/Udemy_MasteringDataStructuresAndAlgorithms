#include "template.hpp"

Arithmetic::Arithmetic(int a, int b)
{
	this->a = a;
	this->b = b;
}
int Arithmetic::add()
{
	return a+b;
}
int Arithmetic::sub()
{
	return a-b;
}
