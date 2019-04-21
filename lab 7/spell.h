#pragma once
#include "stdafx.h"
#include <stdio.h>
#include <iostream>

using namespace std;

class spell
{
public:
	string name;
	int dhp;
	int dmp;
	spell bolt();
	spell drain();
};

