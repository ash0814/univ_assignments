#include "./Triangle.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	double a, b, c;
	string color;
	bool filled;
	cout << "Enter Color : ";
	cin >> color;
	cout << "Enter three side of Triangle : ";
	cin >> a >> b >> c;
	cout << "Fill (1) / Empty(0) : ";
	cin >> filled;

	cout << "\n******Triangle Setting....*******\n" << endl;
	Triangle t(a, b, c);
	t.setColor(color);
	t.setFilled(filled);

	cout << "Triangle Area : " << t.getArea() << endl;
	cout << "Triangle Perimeter : " << t.getPerimeter() << endl;
	cout << "Triangle Color : " << t.getColor() << endl;
	cout << "Triangle Filled : ";
	if (t.isFilled() == true)
		cout << "true" << endl;
	else
		cout << "false" << endl;
}