#pragma once
class Time
{
private:
	long hours;
	unsigned char minutes;

public:
	void setTime(long newHours, unsigned char newMinutes);
	long getHours();
	unsigned char getMinutes();
	Time operator + (Time & plusTime);
	Time operator - (Time & minusTime);
	Time operator * (int mulTimes);
	void print();

	
};

