#include "stdafx.h"
#include "Time.h"
#include <iostream>
#include <stdio.h>

using namespace std;

void Time::setTime(long newHours, unsigned char newMinutes)
{
	this->minutes=newMinutes;
	this->hours=newHours;
	return;
}

long Time::getHours()
{
	return this->hours;
}

unsigned char Time::getMinutes()
{
	return this->minutes;
}

Time Time::operator+ (Time & plusTime)
{
	Time result;
	result.hours=this->hours+plusTime.hours;
	result.minutes=this->minutes+plusTime.minutes;
	if (result.minutes>=60)
	{
result.minutes=(result.minutes-60);
result.hours=(result.hours+1);
	}
	return result;
}

Time Time::operator- (Time & minusTime)
{
	Time result;
	result.hours=this->hours-minusTime.hours;
	int f;
	f=this->minutes-minusTime.minutes;
	if (f<0)
	{
	result.minutes=f+60;
	result.hours=(result.hours-1);
	}
	else result.minutes=f;
    return result;
}

Time Time::operator* (int mulTimes)
{
	Time result;
	result.hours=this->hours*mulTimes;
	int r=this->minutes*mulTimes;
	if (r > 60) {
		int addMinutes = r % 60;
		int addHours = r / 60;
		result.hours += addHours;
		result.minutes = addMinutes;
	
	}
	else result.minutes = r;	
	return result;
}

bool Time::operator< (Time & minusTime)
{
	if (minusTime.hours>this->hours) return true;
	else if (minusTime.hours<this->hours) return false;
	else if (minusTime.minutes<this->minutes) return true;
	else if (minusTime.minutes>=this->minutes) return false;
}


bool Time::operator> (Time & minusTime)
{
	if (minusTime.hours<this->hours) return true;
	else if(minusTime.hours>this->hours) return false;
	else if(minusTime.minutes>this->minutes) return true;
	else if(minusTime.minutes<this->minutes) return false;
		
}








void Time::print()
{
	cout <<this->hours<<"hours "<<(int)this->minutes<<"minutes "<<endl;
}

