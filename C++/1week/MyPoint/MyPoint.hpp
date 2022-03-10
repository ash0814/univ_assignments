#ifndef MYPOINT_HPP
#define MYPOINT_HPP

class MyPoint
{
private:
	double x;
	double y;
public:
	MyPoint();
	MyPoint(double x, double y);
	~MyPoint();
	double getX();
	double getY();
	double distance(MyPoint pt);
};


#endif
