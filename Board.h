#pragma once
#include <iostream>
using namespace std;
#include "Ship.h"
class Board {
private:
	char** shipBoard;
	int rows;
	int cols;
public:
	Board(int, int);
	Board(const Board&);
	Board();
	void viewBoard();
	char generateCol(int); //For Coordinate A3 B2 C1 
	void placeShip(Ship);
	int getRows();
	int getCols();
	void setValue(int, int, char);
	char getValue(int, int);
	bool hasShip();
	void autoPlace(Ship);
	void updateTarget(Board);
};