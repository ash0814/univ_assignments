#include "MyPoint.hpp"
#include <math.h>

MyPoint::MyPoint()
{
	x = 0;
	y = 0;
}

MyPoint::MyPoint(double x, double y)
{
	this->x = x;
	this->y = y;
}

MyPoint::~MyPoint()
{
}

double MyPoint::getX()
{
	return x;
}

double MyPoint::getY()
{
	return y;
}

double MyPoint::distance(MyPoint pt)
{
	double a = pow(x - pt.getX(), 2);
	double b = pow(y - pt.getY(), 2);
	return sqrt(a + b);
}