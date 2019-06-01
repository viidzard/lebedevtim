// lab124ast2lebedevpp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "windows.h"
#include <iostream>
#include "stdio.h"
#include <conio.h>
#include <cstdlib>
#include <ctime>
using namespace std;


DWORD WINAPI thread1(LPVOID);
DWORD WINAPI thread2(LPVOID);
DWORD WINAPI thread3(LPVOID);
DWORD WINAPI thread4(LPVOID);
DWORD WINAPI thread5(LPVOID);

volatile int borisov, nikolaev, antonov;


int _tmain(int argc, _TCHAR* argv[])
{
	
	borisov=0;
	nikolaev=0;
	antonov=0;
	HANDLE thread[5];
	thread[0]=CreateThread(NULL,0,thread1,NULL, 0, NULL);
	thread[1]=CreateThread(NULL,0,thread2,NULL, 0, NULL);
	thread[2]=CreateThread(NULL,0,thread3,NULL, 0, NULL);
	thread[3]=CreateThread(NULL,0,thread4,NULL, 0, NULL);
	thread[4]=CreateThread(NULL,0,thread5,NULL, 0, NULL);
	
	DWORD dwWaitResult = ::WaitForMultipleObjects(5,thread,true, INFINITE);

	cout << "\nGolosov u Borisova: \n" << borisov;
	cout << "Golosov u Nikolaeva: \n"<< nikolaev;
	cout << "Golosov u Antonova: \n" << antonov;
	cout << "Golosov: \n" << antonov+borisov+nikolaev;
	
	return 0;
}

DWORD WINAPI thread1(LPVOID t)
{
	srand(time(0));
	for (int g=0;g<500;g++)
		
{
	int res=rand()%3+1;
	//cout << "y\n"<<res;
		if (res == 1)
		{
			borisov++;
		}

		if (res == 2)
		{
			nikolaev++;
		}
		if (res == 3)
		{
			antonov++;
		}
	
		
}

	cout << "1 city end\n ";

	return 0;
	}
DWORD WINAPI thread2(LPVOID t)
{
	srand(time(0));
	for (int g=0;g<500;g++)

	{
	int res=rand()%3+1;
	{
		if (res == 1)
		{
			borisov++;
		}

		if (res == 2)
		{
			nikolaev++;
		}
		if (res == 3)
		{
			antonov++;
		} cout << "2 city end\n";
	
	
}
	}
	cout << "2 city end\n";
	return 0;
	
}
DWORD WINAPI thread3(LPVOID t)
{
	srand(time(0));
	for (int g=0;g<500;g++)
{
	int res=rand()%3+1;
		if (res == 1)
		{
			borisov++;
		}

		if (res == 2)
		{
			nikolaev++;
		}
		if (res == 3)
		{
			antonov++;
		} 
	
}
	cout << "3 city end\n";
	return 0;
	}
DWORD WINAPI thread4(LPVOID t)
{
	srand(time(0));
	for (int g=0;g<500;g++)
	{
	int res=rand()%3+1;
	{
		if (res == 1)
		{
			borisov++;
		}

		if (res == 2)
		{
			nikolaev++;
		}
		if (res == 3)
		{
			antonov++;
		}//cout << "4 city end\n";
	
}
	}

	cout << "4 city end\n";
	return 0;

}
DWORD WINAPI thread5(LPVOID t)
{
	srand(time(0));
	for (int g=0;g<500;g++)
{
	int res=rand()%3+1;
		if (res == 1)
		{
			borisov++;
		}

		if (res == 2)
		{
			nikolaev++;
		}
		if (res == 3)
		{
			antonov++;
		} 
	
}
	cout << "5 city end\n";
	return 0;
	;}