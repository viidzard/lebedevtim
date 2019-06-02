#pragma once

class money
{
private:
	int rubley;
	unsigned char kopeek;
public:
	void set(int newRubley, int newKopeek);
	long getRubley() ;
	unsigned char getKopeek();
	money operator+(money& plusTime);
	money operator-(money& plusTime);
	money operator*(const int& plusTime);
	void print();
};