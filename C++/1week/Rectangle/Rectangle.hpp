#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

class Rectangle
{
private:
	double weight;
	double height;
public:
	Rectangle();
	Rectangle(double w, double h);
	~Rectangle();
	double getWeight();
	void setWeight(double w);
	double getHeight();
	void setHeight(double h);
	double getArea();
	double getPerimeter();
};


#endif