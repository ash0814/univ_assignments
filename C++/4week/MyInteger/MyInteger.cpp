#include "MyInteger.h"

MyInteger::MyInteger(int _val)
{
	value = _val;
}

MyInteger::~MyInteger()
{
}

int MyInteger::getValue() const
{
	return value;
}

bool MyInteger::isEven() const
{
	return !(value % 2);
}

bool MyInteger::isOdd() const
{
	return value % 2;
}

bool MyInteger::isPrime() const
{
	for (int i = 2; i < value; i++) {
		if (value % i == 0)
			return false;
	}
	return true;
}

bool MyInteger::isEven(int a)
{

}

bool MyInteger::isOdd(int a)
{

}

bool MyInteger::isPrime(int a)
{

}

bool MyInteger::isEven(const MyInteger &i)
{

}

bool MyInteger::isOdd(const MyInteger &i)
{

}

bool MyInteger::isPrime(const MyInteger &i)
{

}

bool MyInteger::equals(int a) const
{
	return (value == a);
}

bool MyInteger::equals(const MyInteger &a) const
{
	return (value == a.value);
}

int MyInteger::parseInt(const string& str)
{

}
