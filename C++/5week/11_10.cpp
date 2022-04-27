#include <iostream>
#include <string>
using namespace std;

int *count(const string&s)
{
	int *ret = new int[26];
	for (int i = 0; i < s.length(); i++)
	{
		for (int j = 0; j < 26; j++) {
			if (s[i] == j + 97 || s[i] == j + 65)
				ret[j]++;
		}
	}
	return ret;
}

int main()
{
	string s;
	int *cnts;
	cout << "Enter a string: ";
	getline(cin, s);
	cnts = count(s);
	for (int i = 0; i < 26; i++) {
		if (cnts[i] > 0)
			cout << (char)(i + 97) << ": " << cnts[i] << " times" << endl;
	}
	return (0);
}