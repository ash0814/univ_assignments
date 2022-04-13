#ifndef CIRCLE_H
#define CIRCLE_H

class Circle
{
private:
	int radius;
public:
	Circle(int a);
	~Circle();
	int getArea();
};

c
Circle::~Circle()
{
}

int Circle::getArea()
{
	return (rad * rad * 3.14);
}


#endif