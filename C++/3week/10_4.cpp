#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s1("I have a dream");
	string s2("Computer Programming");

	cout << "(1) " << s1[0] << endl;
	s1 = s2;
	cout << "(2) s1 : " << s1 << endl;
	s1 = "I have a dream";
	s1 = "C++ " + s2;
	cout << "(3) s1 : " << s1 << endl;
	s1 = "I have a dream";
	s2 += "C++ ";
	cout << "(4) s2 :" << s2 << endl;
	s2 = "Computer Programming";
	cout << "(5) " << (s1 > s2) << endl;
	cout << "(6) " << (s1 >= s2) << endl;
	cout << "(7) " << (s1 < s2) << endl;
	cout << "(8) " << (s1 <= s2) << endl;
	cout << "(9) " << (s1 == s2) << endl;
	cout << "(10) " << (s1 != s2) << endl;
}