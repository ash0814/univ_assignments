#include <iostream>
using namespace std;

class Parent
{
public:
	virtual void f()
	{
		cout << "invoke f from Parent" << endl;
	}
};

class Child : public Parent
{
public:
	void f()
	{
		cout << "invoke f from Child" << endl;
	}
};

void p(Parent &a)
{
	a.f();
}

int main()
{
	Parent a;
	a.f();
	p(a);

	Child b;
	b.f();
	p(b);

	return (0);
}