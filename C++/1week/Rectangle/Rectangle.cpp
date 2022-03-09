#include "./Rectangle.hpp"

Rectangle::Rectangle()
{
	weight = 1;
	height = 1;
}

Rectangle::Rectangle(double w, double h)
{
	weight = w;
	height = h;
}

Rectangle::~Rectangle()
{
}

double Rectangle::getWeight()
{
	return weight;
}

void Rectangle::setWeight(double w)
{
	weight = w;
}

double Rectangle::getHeight()
{
	return height;
}

void Rectangle::setHeight(double h)
{
	height = h;
}

double Rectangle::getArea()
{
	return (weight * height);
}

double Rectangle::getPerimeter()
{
	return (2 * (weight + height));
}