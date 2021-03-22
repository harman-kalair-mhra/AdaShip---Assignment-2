#include "Board.h"
#include "Player.h"
#include "Computer.h"
#include "Ship.h"
#include "FileReader.h"
#include <iostream>
#include <time.h>
using namespace std;


//Main menu function to print single or multiplayer and returns the user choice
int mainMenu() {
  cout << "▄▀█ █▀▄ ▄▀█ █▀ █░█ █ █▀█" << endl;
  cout << "█▀█ █▄▀ █▀█ ▄█ █▀█ █ █▀▀" << endl;
  




	cout << "*********************\n";
	int choice;
	cout << "1. One player v computer game\n2. Two player game\n3. One player v computer (salvo) game.\n4. Two player game (salvo) game\n5. One player v computer (hidden mines) game\n6. Two player game (hidden mines) game\n7. Computer v computer (hidden mines)\n8. Quit\n";
	cout << "*********************\n";
	cin >> choice;
	return choice;
}


//Single player mode function. 
void singlePlayer(Player& P, Computer& C) {
	string input;
	Board target1(P.getBoard()->getRows(), P.getBoard()->getCols()), target2(C.getBoard()->getRows(), C.getBoard()->getCols());
	Board copy(*(P.getBoard()));
	while (true && input != "quit") {
		if (P.isDestroyed()) {
			cout << "Player 2 has won the game!!\n";
			return;
		}
		else if (C.isDestroyed()) {
			cout << "Computer has won the game!!\n";
			return;
		}
		else {
			cout << "*********** Your's Board *************\n";
			P.printBoard();
			cout << "Total hits: " << P.getHits() << endl;
			cout << "Total miss: " << P.getMiss() << endl;
			cout << "\n*********** Target Board *************\n";
			target1.updateTarget(*(C.getBoard()));
			target1.viewBoard();
			cout << "Player turn - Enter coordinate | 'quit' | 'reset': ";
			cin >> input;
			if (input == "quit") {
				break;
			}
			if (input == "reset") {
				P.reset(copy);
				continue;
			}
			while (input.size() == 1) {
				cout << "(Illegal Location) Player turn - Enter coordinate | 'quit' | 'reset': ";
				cin >> input;
				if (input == "quit") {
					break;
				}
				if (input == "reset") {
					P.reset(copy);
					continue;
				}
			}
			int col = input.at(0) - 65;
			int row = input.at(1) - 48;
			while (input.size() != 2 || row >= C.getBoard()->getRows() || col >= C.getBoard()->getCols()) {
				cout << "(Illegal Location) Player turn - Enter coordinate | 'quit' | 'reset': ";
				cin >> input;
				col = input.at(0) - 65;
				row = input.at(1) - 48;
			}

			C.setBoard(P.fire(input, *(C.getBoard())));

			system("pause");
			cout << "*********** Your Board *************\n";
			C.printBoard();
			cout << "Total hits: " << C.getHits() << endl;
			cout << "Total miss: " << C.getMiss() << endl;
			cout << "\n*********** Target Board *************\n";
			target1.updateTarget(*(P.getBoard()));
			target1.viewBoard();
			P.setBoard(C.fire(*(P.getBoard())));

			system("pause");
		}
	}
}

//This function helps simulating the multiplayer strategy between player p1 and player p2.
void multiplayer(Player &P1, Player &P2) {
	string input;
	Board target1(P1.getBoard()->getRows(), P1.getBoard()->getCols()), target2(P2.getBoard()->getRows(), P2.getBoard()->getCols());

	Board copy1(*(P1.getBoard()));
	Board copy2(*(P2.getBoard()));
	while (true && input != "quit") {
		if (P1.isDestroyed()) {
			cout << "Player 2 has won the game!!\n";
			return;
		}
		else if (P2.isDestroyed()) {
			cout << "Player 1 has won the game!!\n";
			return;
		}
		else {
			cout << "*********** Your's Board *************\n";
			P1.printBoard();
			cout << "Total hits: " << P1.getHits() << endl;
			cout << "Total miss: " << P1.getMiss() << endl;
			cout << "\n*********** Target Board *************\n";
			target2.updateTarget(*(P2.getBoard()));
			target2.viewBoard();
			cout << "Player 1 turn - Enter coordinate | 'quit' | 'reset': ";
			cin >> input;
			if (input == "quit") {
				break;
			}
			if (input == "reset") {
				P1.reset(copy1);
				continue;
			}
			int col = input.at(0) - 65;
			int row = input.at(1) - 48;
			while (input.size() != 2 || row >= P2.getBoard()->getRows() || col >= P2.getBoard()->getCols()) {
				cout << "(Illegal Location) Player 1 turn - Enter coordinate | 'quit' | 'reset': ";
				cin >> input;
				col = input.at(0) - 65;
				row = input.at(1) - 48;
			}
			P2.setBoard(P1.fire(input, *(P2.getBoard())));

			system("pause");
			cout << "*********** Your Board *************\n";
			P2.printBoard();
			cout << "Total hits: " << P2.getHits() << endl;
			cout << "Total miss: " << P2.getMiss() << endl;
			cout << "\n*********** Target Board *************\n";
			target1.updateTarget(*(P1.getBoard()));
			target1.viewBoard();
			cout << "Player 2 turn - Enter coordinate | 'quit' | 'reset': ";
			cin >> input;
			if (input == "quit") {
				break;
			}
			if (input == "reset") {
				P2.reset((copy2));
				continue;
			}
			 col = input.at(0) - 65;
			 row = input.at(1) - 48;
			while (input.size() != 2 || row >= P1.getBoard()->getRows() || col >= P1.getBoard()->getCols()) {
				cout << "(Illegal Location) Player 2 turn - Enter coordinate | 'quit' | 'reset': ";
				cin >> input;
				col = input.at(0) - 65;
				row = input.at(1) - 48;
			}
			P1.setBoard(P2.fire(input, *(P1.getBoard())));

			system("pause");
		}
	}
}

//This function based on the multiplayer or single player choice by user, ask user to place ships automatically
// or manually and call respected function to fill board with ships based on user input
void run() {
	srand(time(NULL));
	int ret = mainMenu();
	while (ret < 1 || ret > 2) {
		cout << "Incorrect Choice!!\n";
		ret = mainMenu();
	}

	if (ret == 1) {
		int autoPlace = 0;
		FileReader fr;
		Player P;
		Computer C;
		cout << "Player - Do you want to autoplace the ships ? (1 = Yes, 2 = No ) : ";
		cin >> autoPlace;
		cout << "Player 1 - Please fill your board\n";
		if (autoPlace == 1) {
			P.setBoard(fr.readConfig(P.getBoard(), true));
		}
		else {
			P.setBoard(fr.readConfig(P.getBoard(), false));
		}
		cout << "Computer auto placed the ships: \n";
		C.setBoard(fr.readConfig(C.getBoard(), true));

		singlePlayer(P, C);
		
	}
	else {
		int autoPlace = 1;
		cout << "Player 1 - Do you want to autoplace the ships ? (1 = Yes, 2 = No ) : ";
		cin >> autoPlace;
		FileReader fr;
		Player P1, P2;
		cout << "Player 1 - Please fill your board\n";
		if (autoPlace == 1) {
			P1.setBoard(fr.readConfig(P1.getBoard(), true));
		}
		else {
			P1.setBoard(fr.readConfig(P1.getBoard(), false));
		}
		
		cout << "Player 2 - Do you want to autoplace the ships ? (1 = Yes, 2 = No ) : ";
		cin >> autoPlace;
		cout << "**************************************\n";
		cout << "Player 2 - Please fill your board\n";
		if (autoPlace == 1) {
			P2.setBoard(fr.readConfig(P2.getBoard(), true));
		}
		else {
			P2.setBoard(fr.readConfig(P2.getBoard(), false));
		}
		
		multiplayer(P1, P2);

	}
}

int main() {
	run();
	return 0;
}