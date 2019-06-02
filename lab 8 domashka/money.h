#pragma once
#include <iostream>
#include "stdafx.h"

class money 
{
private:
	int rubley;
	unsigned char kopeek;
public:
	void set(int newRubley, int newKopeek);
	int getRubley();
	unsigned char getKopeek();
	void addMoney(money &someMoney);
	void substractMoney(money &someMoney);
	void print();
};