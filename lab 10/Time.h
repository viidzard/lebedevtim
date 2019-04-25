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
	Time operator+ (Time & plusTime);
	Time operator- (Time & minusTime);
	Time operator* (int mulTimes);
	bool operator< (Time & minusTime);
	bool operator> (Time & minusTime);
	void print();

	
};

