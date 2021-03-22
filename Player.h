#pragma once
#include "Board.h"
#include <string>
using std::string;
class Player {
private:
	Board p_Board;
	int hits;
	int miss;
public:
	Player();
	Board* fire(string coordinate, Board &enemyBoard);
	bool isDestroyed();
	Board *getBoard();
	void incrementHit();
	void incrementMiss();
	void setBoard(Board *);
	void printBoard();
	int getHits();
	int getMiss();
	void reset(Board);
};