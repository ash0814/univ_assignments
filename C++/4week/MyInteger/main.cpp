#include "./MyInteger.h"

int main()
{
	MyInteger intClass(123);
	MyInteger classTen(10);

	cout << intClass.getValue() << endl;
	cout << "Is Even? : " << intClass.isEven() << endl;
	cout << "Is Odd? : " << intClass.isOdd() << endl;
	cout << "Is Prime? : " << intClass.isPrime() << endl;
	cout << "Is Prime? : " << MyInteger::isPrime(intClass) << endl;
	cout << "Is same as 123? : " << intClass.equals(123) << endl;
	cout << "Is same as classTen? : " << intClass.equals(classTen) << endl;
	cout << endl;
	cout << "2 is Even? : " << MyInteger::isEven(2) << endl;
	cout << "11 is Prime? : "<< MyInteger::isPrime(11) << endl;
	cout << endl;
	cout << "\"10\" + \"3\" = ?" << endl;
	cout << MyInteger::parseInt("10") + MyInteger::parseInt("3") << endl;

	return 0;
}