

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <fstream>



int _tmain(int argc, _TCHAR* argv[])
{
	std::vector<complex> complexVector;
	read_complex(complexVector);
	write_complex(complexVector);
	system("pause");
}

