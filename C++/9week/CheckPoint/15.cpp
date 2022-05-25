#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
	void printInfo() {
		cout << getInfo() << endl;
	}

	string getInfo() {
		return "Person";
	}
};

class Student : public Person
{
public:
	string getInfo()
	{
		return "Student";
	}
};

int main()
{
	Person().printInfo();
	Student().printInfo();
}
