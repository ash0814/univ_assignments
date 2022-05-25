#include <iostream>
#include "CircleWithConstantMemberFunctions.h"
using namespace std;

int main()
{
	Circle c1(10);
	Circle c2(6);

	if (c1 < c2)
		cout << "c1 is smaller than c2" << endl;
	else
		cout << "c1 is bigger than c2" << endl;
	
	Circle c3(10);
	if (c1 >= c3)
		cout << "c1 is same or bigger than c3" << endl;
	else
		cout << "c1 is smaller than c3" << endl;
	
	Circle c4(7);
	if (c3 == c4)
		cout << "c3 == c4 is true" << endl;
	if (c3 != c4)
		cout << "c3 != c4 is true" << endl;
	if (c3 > c4)
		cout << "c3 > c4 is true" << endl;
	if (c3 < c4)
		cout << "c3 < c4 is true" << endl;
	return (0);
}