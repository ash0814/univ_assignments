#include <iostream>
using namespace std;

class Parent {
	virtual void m() {};
};

class Child : public Parent
{
public:
	void m()
	{
		cout << "invoke m" << endl;
	}
};

int main()
{
	Parent *p = new Child();
	// (*p).m();
	// Child *p1 = dynamic_cast<Child *>(p);
	// (*p1).m();
	// Child *p1 = static_cast<Child*>(p);
	// (*p1).m();
	dynamic_cast<Child*>(p) -> m();

	return 0;
}
