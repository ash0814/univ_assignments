#include <string>
#include <iostream>

class Circle
{
public:
	Circle(double radius)
	{
		radius = radius;
	}
	double getRadius()
	{
		return radius;
	}
	double getArea()
	{
		return radius * radius * 3.14159;
	}
private:
	double radius;
};

class B : Circle
{
public:
	B(double radius, double length)
	{
		radius = radius;
		length = length;
	}
	
	// 원의 getArea() * length 값 반환
	double getArea()
	{
		return getArea() * length;
	}
private:
	double length;
};
