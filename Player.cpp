#include "Player.h"

Player::Player()
{
	hits = 0;
	miss = 0;
}

//this function fire at coordinate on enemy board
Board* Player::fire(string coordinate, Board& enemyBoard)
{\
	if (coordinate.length() == 2) {
		char temp = coordinate.at(0);
		if (!isupper(temp)) {
			temp = toupper(temp);
		}
		int col = temp - 65;
		int row = coordinate.at(1) - 48;
		if (row < enemyBoard.getRows() && col < enemyBoard.getCols()) { //input validation
			if(enemyBoard.getValue(row,col) != '-' && enemyBoard.getValue(row, col) != 'H' && enemyBoard.getValue(row, col) != 'M'){
				cout << "You hit the enemy board\n";
				enemyBoard.setValue(row, col, 'H');
				this->incrementHit();
			}
			else {
				cout << "You have missed the attack on enemy board\n";
				enemyBoard.setValue(row, col, 'M');
				this->incrementMiss();
			}
		}
		else {
			return &enemyBoard;
		}
	}
	return &enemyBoard;
}

bool Player::isDestroyed()
{
	if (p_Board.hasShip()) {
		return false;
	}
	return true;
}

Board *Player::getBoard()
{
	return &p_Board;
}

void Player::incrementHit()
{
	hits++;
}

void Player::incrementMiss()
{
	miss++;
}

void Player::setBoard(Board *b)
{
	this->p_Board = *b;
}

void Player::printBoard()
{
	p_Board.viewBoard();
}

int Player::getHits()
{
	return hits;
}

int Player::getMiss()
{
	return miss;
}

//This function is used to reset the board
void Player::reset(Board P)
{
	for (int i = 0; i < P.getRows(); i++) {
		for (int j = 0; j < P.getCols(); j++) {
			this->p_Board.setValue(i, j, P.getValue(i, j));
		}
	}
}
