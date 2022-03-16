#include "./Time.h"

Time::Time()
{
	int totalSeconds = time(0);
	second = totalSeconds % 60;
	int totalMinutes = totalSeconds / 60;
	minute = totalMinutes % 60;
	int totalHours = totalMinutes / 60;
	hour = totalHours % 24;
}

Time::Time(int time)
{
	int totalSeconds = time;
	second = totalSeconds % 60;
	int totalMinutes = totalSeconds / 60;
	minute = totalMinutes % 60;
	int totalHours = totalMinutes / 60;
	hour = totalHours % 24;
}

Time::Time(int h, int m, int s)
{
	hour = h;
	minute = m;
	second = s;
}

Time::~Time()
{
}

int Time::getHour()
{
	return hour;
}

int Time::getMinute()
{
	return minute;
}

int Time::getSecond()
{
	return second;
}

void Time::setTime(int elapseTime)
{
	int totalSeconds = elapseTime;
	second = totalSeconds % 60;
	int totalMinutes = totalSeconds / 60;
	minute = totalMinutes % 60;
	int totalHours = totalMinutes / 60;
	hour = totalHours % 24;
}