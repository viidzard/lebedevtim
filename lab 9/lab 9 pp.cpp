// lab 9 pp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Time.h"


int _tmain(int argc, _TCHAR* argv[])
{
	Time a,b,c;
	Time x,n,m;
	
	a.setTime(2,59);
	b.setTime(0,40);
	int yy;
	yy=2;
	x=a.operator+(a);
	n=a-b;
	c=a.operator*(yy);

	
	x.print();
	n.print();
    c.print();

	return 0;
}


