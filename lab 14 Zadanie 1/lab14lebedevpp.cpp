// lab12lebedevpp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "windows.h"
#include <iostream>
#include "stdio.h"
#include <conio.h>

using namespace std;

volatile int i;

DWORD WINAPI thread2(LPVOID);



int _tmain(int argc, _TCHAR* argv[])
{
	cout << "First thread\n";
	HANDLE thread = CreateThread(NULL,0,thread2,NULL, 0, NULL);
	cout << "More data from first thread\n";
	i=1;
       while(true)
	   {
    i *= -1;
	   }
	   
	cout << "Even more data from first thread\n";
	_getch();
	return 0;
}

DWORD WINAPI thread2(LPVOID t)
{
	cout << "Second thread\n";
	while(true)
	{
		printf("i= %d\n",i);
	}
	return 0;	
}

