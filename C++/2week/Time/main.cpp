#include "./Time.h"
using namespace std;

int main()
{
	Time a;
	Time b(555550);
	Time c(0, 57, 10);

	cout << a.getHour() << " : " << a.getMinute() << " : " << a.getSecond() << endl;
	cout << b.getHour() << " : " << b.getMinute() << " : " << b.getSecond() << endl;
	cout << c.getHour() << " : " << c.getMinute() << " : " << c.getSecond() << endl;
}