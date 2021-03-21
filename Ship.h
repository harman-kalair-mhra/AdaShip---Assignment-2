#pragma once
class Ship {
private:
	char value;
	int length;
public:
	Ship();
	Ship(char, int);
	char getValue();
	int getLength();

};