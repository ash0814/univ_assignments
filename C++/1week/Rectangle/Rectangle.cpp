#include "./Rectangle.hpp"

Rectangle::Rectangle()
{
	width = 1;
	height = 1;
}

Rectangle::Rectangle(double w, double h)
{
	width = w;
	height = h;
}

Rectangle::~Rectangle()
{
}

double Rectangle::getWidth()
{
	return width;
}

void Rectangle::setWidth(double w)
{
	width = w;
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
	return (width * height);
}

double Rectangle::getPerimeter()
{
	return (2 * (width + height));
}
