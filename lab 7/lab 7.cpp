// lab 7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "mage.h"
#include "spell.h"

int _tmain(int argc, _TCHAR* argv[])
{
	spell bolt, drain;
	bolt.dhp=20;
	bolt.dmp=0;
	bolt.name="udar";
	
	drain.dhp=60;
	drain.dmp=80;
	drain.name="zaklinanie";

	mage vanya, boris;
	vanya.init(100,100,"Ã¿√ mangki");
	boris.init(100,100,"Ã¿√ manguoyu");

	vanya.cast(bolt, boris);
	boris.cast(drain, vanya);
	vanya.cast(drain, boris);
	boris.cast(bolt, vanya);
	vanya.cast(bolt, boris);
	boris.cast(drain, vanya);

	system ("pause");
	return 0;
}

