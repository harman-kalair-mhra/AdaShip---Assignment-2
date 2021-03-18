#include <iostream>
using namespace std;

//Main menu function to print single or multiplayer and returns the user choice
int main() {
  cout << "▄▀█ █▀▄ ▄▀█ █▀ █░█ █ █▀█" << endl;
  cout << "█▀█ █▄▀ █▀█ ▄█ █▀█ █ █▀▀" << endl;
  




	cout << "*********************\n";
	int choice;
	cout << "1. One player v computer game\n2. Two player game\n3. One player v computer (salvo) game.\n4. Two player game (salvo) game\n5. One player v computer (hidden mines) game\n6. Two player game (hidden mines) game\n7. Computer v computer (hidden mines)\n8. Quit\n";
	cout << "*********************\n";
	cin >> choice;
	return choice;
}