#include "MyInteger.h"

MyInteger::MyInteger(int _val)
{
	value = _val;
}

MyInteger::~MyInteger()
{
}

const int MyInteger::getValue()
{
	return value;
}

const bool MyInteger::isEven()
{
	return !(value % 2);
}

const bool MyInteger::isOdd()
{
	return value % 2;
}

const bool MyInteger::isPrime()
{
	for (int i = 2; i < value; i++) {
		if (value % i == 0)
			return false;
	}
	return true;
}

static bool MyInteger::isEven(int)
{

}

static bool MyInteger::isOdd(int)
{

}

static bool MyInteger::isPrime(int)
{

}

static bool MyInteger::isEven(const MyInteger &)
{

}

static bool MyInteger::isOdd(const MyInteger &)
{

}

static bool MyInteger::isPrime(const MyInteger &)
{

}

const bool MyInteger::equals(int a)
{
	return (value == a);
}

const bool MyInteger::equals(const MyInteger &a)
{
	return (value == a.value);
}

static int MyInteger::parseInt(const string&)
{

}
