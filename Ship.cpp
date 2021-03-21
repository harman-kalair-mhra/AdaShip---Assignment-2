#include "Ship.h"

Ship::Ship()
{
	value = ' ';
	length = 0;
}

Ship::Ship(char c, int l)
{
	value = c;
	length = l;
}

char Ship::getValue()
{
	return value;
}

int Ship::getLength()
{
	return length;
}
