#ifndef TIME_H
#define TIME_H

#include <ctime>
#include <iostream>

class Time
{
private:
	int hour;
	int minute;
	int second;
public:
	Time();
	Time(int time);
	Time(int h, int m, int s);
	~Time();

	int getHour();
	int getMinute();
	int getSecond();

	void setTime(int elapseTime);
};

#endif