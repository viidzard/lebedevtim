#include "animal.h"
#include <iostream>
#include <string>

class egg;

void animal::setname(std::string newName)
{
	name = newName;
}

std::string animal::getname()
{
	return this->name;
}

void animal::say(std::string text)
{
	std::cout << text << std::endl;
}

void animal::try_break_egg(egg some_egg)
{
	 say("animal  " + name);
	if (some_egg.broke(name))
	say("razbilos");
	else
    say("ne razbilos");
}

egg * animal::create_egg()
{
	if (name == "chicken") 
	{
		egg * val;
		val = new egg;
		val->size = 5;
		val->weight = 50;
		return val;
	}
	else nullptr;
}
