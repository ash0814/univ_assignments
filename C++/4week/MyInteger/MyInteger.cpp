#include "MyInteger.h"

#include <ctype.h>

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
	return !(a % 2);
}

bool MyInteger::isOdd(int a)
{
	return (a % 2);
}

bool MyInteger::isPrime(int a)
{
	for (int i = 2; i < a; i++) {
		if (a % i == 0)
			return false;
	}
	return true;
}

bool MyInteger::isEven(const MyInteger &i)
{
	return !(i.getValue() % 2);
}

bool MyInteger::isOdd(const MyInteger &i)
{
	return i.getValue() % 2;
}

bool MyInteger::isPrime(const MyInteger &i)
{
	for (int idx = 2; idx < i.getValue(); idx++) {
		if (i.getValue() % idx == 0)
			return false;
	}
	return true;
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
	int idx = 0;
	int sign = 1;
	int result = 0;

	while (isspace(str[idx]))
		idx++;
	if (str[idx] == '-') {
		sign = -1;
		idx++;
	} else if (str[idx] == '+') {
		idx++;
	}
	while ('0' <= str[idx] && str[idx] <= '9' && str[idx] != '\0')
	{
		result = result * 10 + str[idx] - '0';
		idx++;
	}
	return result * sign;
}
