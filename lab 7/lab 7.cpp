
#include <iostream>
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
	vanya.init(100,100,"Vanya the mage of fire");
	boris.init(100,100,"Borya the mage of water");

	mage thisMage;
	spell* thisSpell;
	bool fightEnd = false;

	thisMage = vanya;
	thisSpell = &bolt;

	while (!fightEnd)
	{
		if (thisMage.getName() == "Vanya")
		{
			if (thisMage.cast(*thisSpell, boris) != 0)
			{
				thisMage = boris;
				if (thisSpell == &bolt)
					thisSpell = &drain;
				else
					thisSpell = &bolt;
			}
			else 
			{
				thisMage.say("im lose and cant spell");
				fightEnd = true;
			}
		}
		else
		{
			if (thisMage.cast(*thisSpell, vanya) != 0)
			{
				thisMage = vanya;
			}
			else
			{
				thisMage.say("im lose and cant spell");
				fightEnd = true;
			}
		}
	}
	system("PAUSE");
}

