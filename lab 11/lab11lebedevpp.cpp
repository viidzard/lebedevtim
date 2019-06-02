#include "stdafx.h"
#include <iostream>
#include "human.h"
#include "animal.h"


int main(int argc, _TCHAR* argv[])
{
	animal chicken, mouse;
	
	chicken.setname("chicken");
	auto Egg = chicken.create_egg();

	mouse.setname("mouse");
	human ded, baba;
	ded.init("ded", 70);
	baba.init("baba", 60);

	chicken.try_break_egg(*Egg);
	mouse.try_break_egg(*Egg);
	ded.try_break_egg(*Egg);
	baba.try_break_egg(*Egg);

	system("PAUSE");

}
