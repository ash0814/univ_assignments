#ifndef MYINTEGER_H
# define MYINTEGER_H

#include <string>
#include <iostream>
using namespace std;

class MyInteger
{
private:
	int value;
public:
	MyInteger(int _val);
	~MyInteger();
	const int getValue();
	const bool isEven();
	const bool isOdd();
	const bool isPrime();
	static bool isEven(int);
	static bool isOdd(int);
	static bool isPrime(int);
	static bool isEven(const MyInteger &);
	static bool isOdd(const MyInteger &);
	static bool isPrime(const MyInteger &);
	const bool equals(int);
	const bool equals(const MyInteger &);
	static int parseInt(const string&);
};

#endif