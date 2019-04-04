#include "stdafx.h"
#include "Book.h"


int _tmain(int argc, _TCHAR* argv[])
{
	class Book x[3];
	x[0].set_name="War and Peace";
	x[0].set_year=1865;
	x[0].get_info="Is a novel by the Russian author Leo Tolstoy. It is regarded as a central work of world literature and one of Tolstoy's finest literary achievements";
	x[1].set_name="The Lord of the Rings";
	x[1].set_year=1954;
	x[1].get_info="Is an epic high fantasy novel written by English author and scholar J. R. R. Tolkien. The story began as a sequel to Tolkien's 1937 fantasy novel The Hobbit, but eventually developed into a much larger work.";
	x[2].set_name="twix";
	x[2].set_year=55;
	x[2].get_info=0;

	for (int i=0; i<3; i++)
	{
		cout << "Book"<<" " << i << "set_name" " "<< x[i].set_name << "\n";
	   if (x[i].get_info) cout << "get_info" "\n"; else "without nuts" ;
		cout << "chocolate"<<" " << i << "weight" " " << x[i].weight << "\n";
		
	
	}
	
	system ("pause");
}
