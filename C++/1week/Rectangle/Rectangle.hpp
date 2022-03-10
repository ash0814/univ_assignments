#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

class Rectangle
{
private:
	double width;
	double height;
public:
	Rectangle();
	Rectangle(double w, double h);
	~Rectangle();
	double getWidth();
	void setWidth(double w);
	double getHeight();
	void setHeight(double h);
	double getArea();
	double getPerimeter();
};


#endif
