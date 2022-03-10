#include "Rectangle.hpp"
#include <iostream>
using namespace std;

int main()
{
	Rectangle A(4, 40);
	Rectangle B;

	cout << "Rectangle A\nArea: "
		<< A.getArea() << "\nPerimeter : "
		<< A.getPerimeter() << endl;
	cout << endl;
	cout << "Rectangle B\nWidth : "
		<< B.getWidth() << "\nHeight : "
		<< B.getHeight() << endl;

	B.setWidth(3.5);
	B.setHeight(35.9);
	cout << "\nRectangle B\nWidth : "
		<< B.getWidth() << "\nHeight : "
		<< B.getHeight() << endl;
	cout << "Area: " << B.getArea()
		<< "\nPerimeter: " <<
		B.getPerimeter() << endl;

	return (0);
}
