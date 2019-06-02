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
}

string mage::getname()
{
	return this->name;
}

void mage::say(string text)
{
	std::cout << name << "say " << text << std::endl;
	
}

int mage::cast(spell & cast, mage & target)
{
	if(this->hp>0)
	{
		std::cout << name << " hit with" << target.getName()<< " enemy " << spl.name << std::endl;
		target.hit(spl);
		return -1;
}
	else
	{
	  return 0;
}
}

	void mage::hit(spell & spl)
	{
		this->hp= this->hp - spl.dhp;
		if (this->hp<0) this ->say("i am loser");
	}
