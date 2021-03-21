#include "Board.h"
#include <string>
using std::string;

// A parameterized constructor to initialize the board with default values.
Board::Board(int r, int c)
{
	rows = r;
	cols = c;
	shipBoard = new char*[rows];
	for (int i = 0; i < rows; i++) {
		shipBoard[i] = new char[cols];
	}

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			shipBoard[i][j] = '-';
		}
	}
}

//A copy constructor for the board
Board::Board(const Board&b)
{
	this->rows = b.rows;
	this->cols = b.cols;
	shipBoard = new char* [rows];
	for (int i = 0; i < rows; i++) {
		shipBoard[i] = new char[cols];
	}

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			shipBoard[i][j] = b.shipBoard[i][j];
		}
	}
	
}

//A default constructor for board
Board::Board()
{
	shipBoard = NULL;
	rows = 0;
	cols = 0;
}

//This function shows the board
void Board::viewBoard()
{
	string colVals = { "ABCDEFGHIJKLMNOPQRSTUVWXYZ" };
	cout << "  ";
	for (int i = 0; i < cols; i++) {
		cout << colVals.at(i) << " ";
	}
	cout << endl;
	for (int i = 0; i < rows; i++) {
		cout << i << " ";
		for (int j = 0; j < cols; j++) {
			cout << shipBoard[i][j] << " ";
		}
		cout << endl;
	}
}

//Generate alphabetical col value
char Board::generateCol(int col)
{
	string cols = { "ABCDEFGHIJKLMNOPQRSTUVWXYZ" };
	return cols.at(col);
}

//This function places the ship s into the board 
void Board::placeShip(Ship s)
{
	char choice = ' ';
	string input = "";
	int row;
	int col;
	char temp;
	int emptyCount = 0;
	bool isEmpty = false;
	int checker = 0;
	int startIndex = 0;
	cout << "Choose 'h' to place horizontally and 'v' to place vertically: ";
	cin >> choice;
	if (choice == 'h') {
		while (!isEmpty) { //Place horizontally
			cout << "Enter row and column : ";
			cin >> input;
			if (input.size() != 2) { //input validation
				continue;
			}
			row = (int)input.at(1) - 48;
			temp = input.at(0);
			if (!isupper(temp)) {
				temp = toupper(temp);
			}
			col = temp - 65;
			startIndex = row;
			checker = col;
			for (int i = 0; i < s.getLength(); i++) {
				if (shipBoard[startIndex][checker++] == '-') { //check if any consecutive indices have empty spaces equal to the size of ship s
					emptyCount++;
				}
			}
			if (emptyCount == s.getLength()) {
				isEmpty = true; //if yes then
				for (int i = 0; i < s.getLength(); i++) {
					shipBoard[startIndex][col++] = s.getValue(); //place the ship at those indices
				}
			}
			else {
				cout << "The row is already filled with another ship, please choose another row!\n";
				emptyCount = 0;
			}
		}

	}
	else { //Place vertically
		while (!isEmpty) {
			cout << "Enter row and column : ";
			cin >> input;
			if (input.size() != 2) {
				continue;
			}
			temp = input.at(0);
			if (!isupper(temp)) {
				temp = toupper(temp);
			}
			row = (int)input.at(1) - 48;
			col = temp - 65;
			startIndex = row;
			checker = startIndex;
			for (int i = 0; i < s.getLength(); i++) {
				if (shipBoard[checker++][col] == '-') {
					emptyCount++;
				}
			}
			if (emptyCount == s.getLength()) {
				isEmpty = true;
				for (int i = 0; i < s.getLength(); i++) {
					shipBoard[startIndex++][col] = s.getValue();
				}
			}
			else {
				cout << "The col is already filled with another ship, please choose another col!\n";
				emptyCount = 0;
			}
		}

	}
}

int Board::getRows()
{
	return rows;
}

int Board::getCols()
{
	return cols;
}

void Board::setValue(int r, int c, char val)
{
	shipBoard[r][c] = val;
}

char Board::getValue(int r, int c)
{
	return shipBoard[r][c];
}

//check if still the board has any ship, this is used to declare the win among players
bool Board::hasShip()
{
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			if (shipBoard[i][j] == 'C' || shipBoard[i][j] == 'B' || shipBoard[i][j] == 'D' || shipBoard[i][j] == 'S' || shipBoard[i][j] == 'P') {
				return true;
			}
		}
	}
	return false;
}

//Autoplace that works similar to the manual placement but using rand() function
void Board::autoPlace(Ship s)
{
	int choice = 0;
	int row;
	int col;
	char temp;
	int emptyCount = 0;
	bool isEmpty = false;
	int checker = 0;
	int startIndex = 0;
	choice = rand() % 2;
	if (choice == 1) {
		while (!isEmpty) {
			row = rand() % rows;
			col = rand() % cols;
			startIndex = row;
			checker = col;
			for (int i = 0; i < s.getLength(); i++) {
				if (shipBoard[startIndex][checker++] == '-') {
					emptyCount++;
				}
			}
			if (emptyCount == s.getLength()) {
				isEmpty = true;
				for (int i = 0; i < s.getLength(); i++) {
					shipBoard[startIndex][col++] = s.getValue();
				}
			}
			else {
				emptyCount = 0;
			}
		}

	}
	else {
		while (!isEmpty) {

			row = rand() % rows;
			col = rand() % cols;
			startIndex = row;
			checker = startIndex;
			if (s.getLength() > rows - checker) {
				continue;
			}
			for (int i = 0; i < s.getLength(); i++) {
				if (shipBoard[checker++][col] == '-') {
					emptyCount++;
				}
			}
			if (emptyCount == s.getLength()) {
				isEmpty = true;
				for (int i = 0; i < s.getLength(); i++) {
					shipBoard[startIndex++][col] = s.getValue();
				}
			}
			else {
				emptyCount = 0;
			}
		}

	}
}

//This function is used to update the target board by comparing the actual enemy board.
void Board::updateTarget(Board B)
{
	for (int i = 0; i < B.getRows(); i++) {
		for (int j = 0; j < B.getCols(); j++) {
			if (B.getValue(i, j) == 'H') {
				setValue(i, j, 'H');
			}else if (B.getValue(i, j) == 'M') {
				setValue(i, j, 'M');
			}
			else {
				setValue(i, j, '?');
			}
		}
	}
}
