#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s1("I have a dream");
	string s2("Computer Programming");
	char s3[] = "ABCDEFGHIJKLMN";

	// s1.clear();
	// cout << s1 << endl; // NULL

	// cout << s1 << "\n" << s3 << endl; // 5
	// s1.copy(s3, 5, 2);
	cout << s1 << "\n" << s2 << endl;
	cout << "====" << endl; // 5
	cout << s1.compare(s2) << endl;
	cout << s1 << '\n' << s2 << endl; // 6
}