#include "MyPoint.hpp"
#include <iostream>
using namespace std;

int main()
{
	MyPoint a;
	MyPoint b(10, 30.5);

	cout << "a(" << a.getX() << "," << a.getY() << ")" << endl;
	cout << "b(" << b.getX() << "," << b.getY() << ")" << endl;
	cout << "a-b : " << a.distance(b) << endl;
	cout << "b-a : " << b.distance(a) << endl;
	cout << "a-a : " << a.distance(a) << endl;
	return (0);
}
