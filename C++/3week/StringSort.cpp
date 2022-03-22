#include <iostream>
#include <string>
using namespace std;

string sort(string& s)
{
	int len = s.length();
	for (int i = 0; i < len; i++) {
		for (int j = 0; j < len; j++) {
			if (s[i] == ' ')
				s[i] = '\0';
			if (s[j] > s[i])
				swap(s[j], s[i]);
		}
	}
	return s;
}

int main()
{
	cout << "Enter a string s: ";
	string s;
	getline(cin, s);
	string res = sort(s);
	cout << "The sorted string is " << res << endl;
	return (0);
}
