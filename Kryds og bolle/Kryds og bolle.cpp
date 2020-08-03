#include "Functions.h"
using namespace std;

int main()
{
	printField();

	while (1) {
		turnP1(player1);
		system("cls");
		printField();
		if (checkWin(player1)) {
			cout << "Player 1 (X's) wins!" << endl;
			break;
		}
		turnP2(player2);
		system("cls");
		printField();
		if (checkWin(player2)) {
			cout << "Player 2 (O's) wins!" << endl;
			break;
		}
	}
	
	cout << "Luk vinduet og start programmet igen for at spille igen" << endl << endl;

	while (1)
	{
	}
}