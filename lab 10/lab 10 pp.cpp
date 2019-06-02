// lab 9 pp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Time.h"
#include <stdio.h>
#include <iostream>
#include "iostream"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	Time a,b,c,d,g,z;
	Time x,n,m;
	bool j,k;
	a.setTime(2,30);
	b.setTime(0,40);
	c.setTime(2,40);
	d.setTime(3,20);
	g.setTime(2,30);
	z.setTime(2,40);

	int yy;
	yy=2;
	
	
	x=a.operator+(a);
	n=a-b;
	c=a.operator*(yy);
	j=g<d;
	k=g>z;
	
	x.print();
	n.print();
    c.print();
	
	
	if (g<d)
	{
		g.print();
		cout << "<";
		d.print();
	}
	else
	{
		g.print();
		cout << ">";
		d.print();
	}

		
	if (g<z)
	{
		g.print();
		cout << ">";
		z.print();
	}
	else
	{
		g.print();
		cout << "<=";
	    z.print();
	}
	
	Time *arr, temp, size;
   
    cout << "n = ";


	arr = new Time[10];

	arr[0].setTime(4,30);
	arr[1].setTime(3,20);
	arr[2].setTime(8,23);
	arr[3].setTime(14,42);
	arr[4].setTime(23,56);
	arr[5].setTime(22,21);
	arr[6].setTime(1,58);
	arr[7].setTime(5,20);
	arr[8].setTime(7,10);
	arr[9].setTime(9,30);


    for (int i = 0; i < 10 - 1; i++) {
        for (int j = 0; j < 10 - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
              
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }


    for (int i = 0; i < 10; i++) {
       arr[i].print();
    }
    cout << endl;

    delete [] arr;
    



	
	
	system ("pause");
	return 0;
}

