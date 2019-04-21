#pragma once
#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include "spell.h"
using namespace std;



class mage
{
private:
	int hp;
	int mp;
    string name;
public:
	void init(int newhp, int newmp, string newname);
    string getname();
	void say(string text);
	int cast(spell & spl,mage & target);
	void hit(spell & spl);
	mage vanya();
	mage boris();
};

