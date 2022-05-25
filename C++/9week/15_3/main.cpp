#include <iostream>
#include "./ThreeDPoint.h"
using namespace std;

int main()
{
	ThreeDPoint o;
	ThreeDPoint p(10, 20, 25.5);
	cout << endl;
	cout << p.distance(o) << endl;
	cout << endl;
	
	return (0);
}