#pragma once
#include "stdafx.h"
#ifndef _DLLTEST_H_
#define _DLLTEST_H_
#include <iostream>

using namespace std;

class egg 
{
public: 
    int size;
    int weight;
     

 __declspec(dllexport) bool breaking(string who);
     

 __declspec(dllexport) void say(string text);
};
 
#endif 