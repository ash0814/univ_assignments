#ifndef MYPOINT_H
#define MYPOINT_H

class MyPoint
{
private:
	double x;
	double y;
public:
	MyPoint();
	MyPoint(double x, double y);
	virtual ~MyPoint();
	double getX() const;
	double getY() const;
	virtual double distance(MyPoint &pt);
};


#endif
