#pragma once
#include "stdafx.h"
#include "mage.h"
#include <stdio.h>
#include <iostream>
#include "spell.h"

using namespace std;

void mage::init(int newhp, int newmp, string newname)
{
	this-> hp=newhp;
	this->mp=newmp;
	this->name=newname;
	return;
}

string mage::getname()
{
	return this->name;
}

void mage::say(string text)
{
	cout <<this->name<<" say: " << text << endl;
	return;
}

int mage::cast(spell & cast, mage & target)
{
	if(this->hp>0)
	{
		cout << this->name << "hit with" << spl.name << "bolt" << endl;
			target.hit(spl);
}else
	{
		cout << this->name << "is loser and cant spell";
}
return 0;
}


	void mage::hit(spell & spl)
	{
		this->hp= this->hp - spl.dhp;
		if (this->hp<0) this ->say("i am loser");
	}
