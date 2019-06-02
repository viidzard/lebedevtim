#include <iostream>
#include "money.h"
#include "stdafx.h

int main(int argc, _TCHAR* argv[])
{
	money a, b;
	a.set(30, 150);
	b.set(20, 50);
	a.addMoney(b);
	a.print();
	a.set(16, 0);
	a.substractMoney(b);
	a.print();
}