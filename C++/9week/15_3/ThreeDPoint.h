#ifndef THREEDPOINT_H
#define THREEDPOINT_H

#include "./MyPoint.h"

class ThreeDPoint : public MyPoint
{
private:
	double z;
public:
	ThreeDPoint();
	ThreeDPoint(double, double, double);
	double getZ() const;
	double distance(const ThreeDPoint &);
	~ThreeDPoint();
};


#endif