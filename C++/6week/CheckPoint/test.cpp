#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
	Person()
	{
		numberOfChildren = 0;
		children = new string[20];

	}

	void addAChild(string name)
	{
		children[numberOfChildren++] = name;
	}

	string* getChildren()
	{
		return children;
	}

	int getNumberOfChildred()
	{
		return numberOfChildren;
	}

	~Person()
	{
		delete children;
	}

private:
	string *children;
	int numberOfChildren;
};
