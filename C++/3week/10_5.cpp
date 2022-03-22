#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "Enter a city: ";
	string city;
	// cin >> city;
	getline(cin, city);
	
	cout << city << endl;
	
	return (0);
}