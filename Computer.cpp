#include "Computer.h"

Computer::Computer() : Player()
{

}

//This fire function works similar to the manual fire but using rand() function
Board* Computer::fire(Board& enemyBoard)
{
		int col = rand() % enemyBoard.getCols();
		int row = rand() % enemyBoard.getRows();
		while (enemyBoard.getValue(row, col) == 'H' || enemyBoard.getValue(row, col) == 'M') {
			 col = rand() % enemyBoard.getCols();
			 row = rand() % enemyBoard.getRows();
		}
		if (row < enemyBoard.getRows() && col < enemyBoard.getCols()) {
			if (enemyBoard.getValue(row, col) != '-' && enemyBoard.getValue(row, col) != 'H' && enemyBoard.getValue(row, col) != 'M') {
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
	return &enemyBoard;
}
