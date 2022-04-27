#include <iostream>
using namespace std;

class Parent
{
public:
	Parent(int x)
	{
		// cout << "aaaa" << endl;
	}
};

class Child : public Parent
{

};

int main()
{
	Child c;
	return (0);
}
