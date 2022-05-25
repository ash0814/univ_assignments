#include <iostream>
#include <cmath>
#include "Rational.h"
using namespace std;

int main()
{
	string input;
	cout << "Enter a decimal number: ";
	cin >> input;
	int dot = 0;
	while (input[dot] != '.' && input[dot])
		dot++;
	if (dot == input.length()) {
		cout << "The fraction number is " << input << "/1" << endl;
	} else {
		string frac = input.substr(dot + 1, input.length());
		int val = atof(input.c_str()) * pow(10, frac.length());
		Rational r(val, pow(10, frac.length()));
		cout << "The fraction number is " << r.toString() << endl;
	}
	return (0);
}