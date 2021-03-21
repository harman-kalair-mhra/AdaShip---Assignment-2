#include "FileReader.h"
#include <vector>
#include <sstream>
#include <fstream>
using namespace std;
Board * FileReader::readConfig(Board* b , bool autoplace)
{
	ifstream infile;
    string line;
	infile.open("adaship_config.ini");
	if (!infile.is_open()) {
		cout << "Unable to open configuration file!!";
		return NULL;
	}
	else {
		while (!infile.eof()) {
			getline(infile, line);
			vector <string> tokens;
			stringstream check1(line);
			string intermediate;

			getline(check1, intermediate, ' ');
			if (intermediate == "Board:") {
				getline(check1, intermediate, 'x');
				int rows = stoi(intermediate);
				getline(check1, intermediate, 'x');
				int cols = stoi(intermediate);
				b = new Board(rows, cols);
			}
			else if (intermediate == "Boat:") {
				getline(check1, intermediate, ',');
				char val = intermediate.at(0);
				getline(check1, intermediate, ' ');
				getline(check1, intermediate, ' ');
				int len = stoi(intermediate);
				Ship S(val, len);
				if (autoplace) {
					b->autoPlace(S);
				}
				else {
					b->placeShip(S);
					b->viewBoard();
				}
				
			}

		}
		if (autoplace) {
			b->viewBoard();
		}
        
		return b;
	}

	return NULL;
}
