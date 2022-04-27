#include <iostream>
#include <string>
using namespace std;

void count(const string&s, int counts[], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < 26; j++) {
			if (s[i] == j + 97 || s[i] == j + 65)
				counts[j]++;
		}
	}
}

int main()
{
	string s;
	int cnts[26] = {0};
	cout << "Enter a string: ";
	getline(cin, s);
	count(s, cnts, s.length());
	for (int i = 0; i < 26; i++) {
		if (cnts[i] > 0)
			cout << (char)(i + 97) << ": " << cnts[i] << " times" << endl;
	}

	// char &temp = char;
	
	return (0);
}