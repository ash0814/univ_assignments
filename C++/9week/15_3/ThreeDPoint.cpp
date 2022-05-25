#include "./ThreeDPoint.h"
#include <math.h>

ThreeDPoint::ThreeDPoint() : MyPoint()
{
	this->z = 0;
}

ThreeDPoint::ThreeDPoint(double a, double b, double c) : MyPoint(a, b)
{
	this->z = c;
}

double ThreeDPoint::getZ() const
{
	return z;
}

double ThreeDPoint::distance(const ThreeDPoint &pt)
{
	double a = pow(this->getX() - pt.getX(), 2);
	double b = pow(this->getY() - pt.getY(), 2);
	double c = pow(this->getZ() - pt.getZ(), 2);
	return sqrt(a + b + c);
}

ThreeDPoint::~ThreeDPoint()
{
}