#include <iostream>
using namespace std;

class A
{
public:
virtual void f() = 0;
};

class B : public A
{
	void f() {
		cout << "invoke f from B" << endl;
	}
};

class C : public B
{
public:
	virtual void m() = 0;
};

class D : public C
{
public:
	virtual void m()
	{
		cout << "invoke m from D" << endl;
	}
};

void p(A &a)
{
	a.f();
}

int main()
{
	D d;
	p(d);
	d.m();

	return 0;
}
