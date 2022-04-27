#include "./Triangle.h"
#include <cmath>

Triangle::Triangle()
{
	side1 = 1.0;
	side2 = 1.0;
	side3 = 1.0;
}

Triangle::Triangle(double side1, double side2, double side3)
{
	this->side1 = side1;
	this->side2 = side2;
	this->side3 = side3;
}

const double Triangle::getSide1()
{
	return side1;
}

const double Triangle::getSide2()
{
	return side2;
}

const double Triangle::getSide3()
{
	return side3;
}

double Triangle::getArea() const
{
	double p;
	double res;
	p = (side1 + side2 + side3) / 2.0;
	res = sqrt(p * (p - side1) * (p-side2) * (p-side3));
	return res;
}

double Triangle::getPerimeter() const
{
	return (side1 + side2 + side3);
}

Triangle::~Triangle()
{
}