// lab12lebedevpp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "windows.h"
#include <iostream>
#include "stdio.h"
#include <conio.h>

using namespace std;

volatile int i;

DWORD WINAPI threadReadTxt(LPVOID);



int _tmain(int argc, _TCHAR* argv[])
{
HANDLE threadsReadTxts[2];
	for (int i = 0; i < 2; i++)
	threadsReadTxts[i] = CreateThread(NULL, 0, threadReadTxt, (LPVOID)i, 0, NULL);
	system("PAUSE");
	return 0;
}

DWORD WINAPI threadReadTxt(LPVOID);
int words[2]{0,0};
std::string files[2]{ "dz14_dune.txt","dz14_karenina.txt" };



