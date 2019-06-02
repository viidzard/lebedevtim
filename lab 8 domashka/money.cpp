#include "money.h"
#include <iostream>
#include "stdafx.h"

void money::set(int newRubley, int newKopeek)
{
	rubley = newRubley;
	if (newKopeek > 100) {
		int setKopeek = newKopeek % 100;
		rubley += newKopeek / 100;
		kopeek = setKopeek;
	}
	else
		kopeek = newKopeek;
}

int money::getRubley()
{
	return this->rubley;
}

unsigned char money::getKopeek();
{
	return this->kopeek;
}

void money::substractMoney(money & someMoney)
{
	rubley -= someMoney.rubley;
	int pence = kopeek - someMoney.kopeek;
	if (pence < 0) {
		rubley--;
		kopeek = 100 + pence;
	}
	else
		kopeek = pence;
}

void money::addMoney(money & someMoney)
{
	rubley += someMoney.rubley;
	kopeek += someMoney.kopeek;
	if (kopeek >= 100)
	{
		rubley++;
		kopeek -= 100;
	}
}



void money::print()
{
	std::cout << rubley << ", " << (int)kopeek << std::endl;
}
