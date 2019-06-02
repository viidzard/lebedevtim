#include "human.h"
#include <iostream>
#include <string>

class egg;

void human::init(std::string newName, int newAge)
{
	name = newName;
	age = newAge;
}

std::string human::getname()
{
	return this->name;
}

int human::getage()
{
	return this->age;
}

void human::say(std::string text)
{
	std::cout << text << std::endl;
}

void human::try_break_egg(egg some_egg)
{
	say("name: " + name);
	if (some_egg.broke(name))
	 say("razbilos");
	else
     say("ne razbilos");
}
