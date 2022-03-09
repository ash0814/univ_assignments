#include "Rectangle.hpp"
#include <iostream>
using namespace std;

int main()
{
	Rectangle A(4, 40);
	Rectangle B(3.5, 35.9);

	cout << A.getArea() << endl;
	cout << B.getArea() << endl;
	return (0);
}
