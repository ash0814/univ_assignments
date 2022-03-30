#include <iostream>
#include <string>
using namespace std;

string sort(string s)
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

bool isAnagram(const string &s1, const string &s2)
{
	if (s1.length() != s2.length())
		return false;
	string sort1 = sort(s1);
	string sort2 = sort(s2);
	for (int i = 0; i < sort1.length(); i++)
		if (sort1[i] != sort2[i])
			return false;
	return true;
}

int main()
{
	string s1;
	string s2;

	cout << "Enter a string s1: ";
	getline(cin, s1);
	cout << "Enter a string s2: ";
	getline(cin, s2);
	if (isAnagram(s1, s2) == true) {
		cout << s1 << " and " << s2 << " are anagrams" << endl;
	} else {
		cout << s1 << " and " << s2 << " are not anagrams" << endl;
	}
	return (0);
}