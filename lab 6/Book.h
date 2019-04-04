#include "stdafx.h"
#include <stdio.h>
#include <iostream>

using namespace std;

class Book
{
private:
	std::string name;
    int year;
public:
	void set_name(const char* new_name);
	void set_year(const int new_year);
	void get_info();
};

void Book::set_name(const char* new_name)
{
	this->name=new_name;
	return;
}

void Book::set_year(const int new_year)
{
	this->year=new_year;
	return;
}

void Book::get_info()
{
	cout<<this->name<<"("<<this->year<<")";
	return;
}
