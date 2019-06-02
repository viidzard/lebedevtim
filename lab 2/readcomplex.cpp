#include "pch.h"
#include "complex.h"

void read_complex(std::vector<complex>& complexVector)
{
	int n = 0;
	std::vector<complex>::iterator it;
	it = complexVector.begin();
	complex a;
	std::ifstream read("input.txt");
	if (!read.is_open())
		std::cout << "can't open file\n";
	while (read>>a.x >> a.y)
	{
		complexVector.push_back(a);
		++n;
	} 
}

void write_complex(std::vector<complex>& complexVector)
{
	for (int i = 0; i < complexVector.size(); ++i)
	{
		std::cout << "znachenie a.x "<<complexVector[i].x  << std::endl;
		std::cout << "znachenie a.y = " << complexVector[i].y << std::endl;
	}
}
