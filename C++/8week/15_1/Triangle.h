#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "./GeometricObject.h"

class Triangle : public GeometricObject
{
public:
	Triangle();
	Triangle(double side1, double side2, double side3);

	const double getSide1();
	const double getSide2();
	const double getSide3();

	double getArea() const;
	double getPerimeter() const;

	~Triangle();
private:
	double side1;
	double side2;
	double side3;
};

#endif