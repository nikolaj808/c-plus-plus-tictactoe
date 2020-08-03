#pragma once
#include <iostream>
#include <string>
using namespace std;

char field[3][3] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };
char player1 = 'X';
char player2 = 'O';
int counter1 = 0;
int counter2 = 0;
char pointless1 = '0';
char pointless2 = '0';
char *firstPtr1 = &pointless1;
char *secondPtr1 = &pointless1;
char *thirdPtr1 = &pointless1;
char *firstPtr2 = &pointless2;
char *secondPtr2 = &pointless2;
char *thirdPtr2 = &pointless2;
int num1, num2;

void turnP1(char player)
{
	int c = 0;

	// First pointer
	if (counter1 == 0) {
		counter1++;
		*firstPtr1 = 's';
		while (c == 0)
		{
			cin >> num1;
			switch (num1)
			{
			case 1:
				if (field[0][0] == player1 || field[0][0] == player2)
				{
					c = 0;
					break;
				}
				else
				{
					field[0][0] = player;
					firstPtr1 = &field[0][0];
					c++;
					break;
				}
				// ------------------
			case 2:
				if (field[0][1] == player1 || field[0][1] == player2)
				{
					c = 0;
					break;
				}
				else
				{
					field[0][1] = player;
					firstPtr1 = &field[0][1];
					c++;
					break;
				}
				// ------------------
			case 3:
				if (field[0][2] == player1 || field[0][2] == player2)
				{
					c = 0;
					break;
				}
				else
				{
					field[0][2] = player;
					firstPtr1 = &field[0][2];
					c++;
					break;
				}
				// ------------------
			case 4:
				if (field[1][0] == player1 || field[1][0] == player2)
				{
					c = 0;
					break;
				}
				else
				{
					field[1][0] = player;
					firstPtr1 = &field[1][0];
					c++;
					break;
				}
				// ------------------
			case 5:
				if (field[1][1] == player1 || field[1][1] == player2)
				{
					c = 0;
					break;
				}
				else
				{
					field[1][1] = player;
					firstPtr1 = &field[1][1];
					c++;
					break;
				}
				// ------------------
			case 6:
				if (field[1][2] == player1 || field[1][2] == player2)
				{
					c = 0;
					break;
				}
				else
				{
					field[1][2] = player;
					firstPtr1 = &field[1][2];
					c++;
					break;
				}
				// ------------------
			case 7:
				if (field[2][0] == player1 || field[2][0] == player2)
				{
					c = 0;
					break;
				}
				else
				{
					field[2][0] = player;
					firstPtr1 = &field[2][0];
					c++;
					break;
				}
				// ------------------
			case 8:
				if (field[2][1] == player1 || field[2][1] == player2)
				{
					c = 0;
					break;
				}
				else
				{
					field[2][1] = player;
					firstPtr1 = &field[2][1];
					c++;
					break;
				}
				// ------------------
			case 9:
				if (field[2][2] == player1 || field[2][2] == player2)
				{
					c = 0;
					break;
				}
				else
				{
					field[2][2] = player;
					firstPtr1 = &field[2][2];
					c++;
					break;
				}
			default:
				c = 0;
				break;
			}
			if (c == 0)
			{
				cout << endl << "Den plads er allerede optaget!" << endl;
			}
		}
	}
	// Second pointer
	else if (counter1 == 1) {
		counter1++;
		*secondPtr1 = 's';
		while (c == 0)
		{
			cin >> num1;
			switch (num1)
			{
			case 1:
				if (field[0][0] == player1 || field[0][0] == player2)
				{
					c = 0;
					break;
				}
				else
				{
					field[0][0] = player;
					secondPtr1 = &field[0][0];
					c++;
					break;
				}
				// ------------------
			case 2:
				if (field[0][1] == player1 || field[0][1] == player2)
				{
					c = 0;
					break;
				}
				else
				{
					field[0][1] = player;
					secondPtr1 = &field[0][1];
					c++;
					break;
				}
				// ------------------
			case 3:
				if (field[0][2] == player1 || field[0][2] == player2)
				{
					c = 0;
					break;
				}
				else
				{
					field[0][2] = player;
					secondPtr1 = &field[0][2];
					c++;
					break;
				}
				// ------------------
			case 4:
				if (field[1][0] == player1 || field[1][0] == player2)
				{
					c = 0;
					break;
				}
				else
				{
					field[1][0] = player;
					secondPtr1 = &field[1][0];
					c++;
					break;
				}
				// ------------------
			case 5:
				if (field[1][1] == player1 || field[1][1] == player2)
				{
					c = 0;
					break;
				}
				else
				{
					field[1][1] = player;
					secondPtr1 = &field[1][1];
					c++;
					break;
				}
				// ------------------
			case 6:
				if (field[1][2] == player1 || field[1][2] == player2)
				{
					c = 0;
					break;
				}
				else
				{
					field[1][2] = player;
					secondPtr1 = &field[1][2];
					c++;
					break;
				}
				// ------------------
			case 7:
				if (field[2][0] == player1 || field[2][0] == player2)
				{
					c = 0;
					break;
				}
				else
				{
					field[2][0] = player;
					secondPtr1 = &field[2][0];
					c++;
					break;
				}
				// ------------------
			case 8:
				if (field[2][1] == player1 || field[2][1] == player2)
				{
					c = 0;
					break;
				}
				else
				{
					field[2][1] = player;
					secondPtr1 = &field[2][1];
					c++;
					break;
				}
				// ------------------
			case 9:
				if (field[2][2] == player1 || field[2][2] == player2)
				{
					c = 0;
					break;
				}
				else
				{
					field[2][2] = player;
					secondPtr1 = &field[2][2];
					c++;
					break;
				}
			default:
				c = 0;
				break;
			}
			if (c == 0)
			{
				cout << endl << "Den plads er allerede optaget!" << endl;
			}
		}
	}
	// Third pointer
	else if (counter1 == 2) {
		counter1 = 0;
		*thirdPtr1 = 's';
		while (c == 0)
		{
			cin >> num1;
			switch (num1)
			{
			case 1:
				if (field[0][0] == player1 || field[0][0] == player2)
				{
					c = 0;
					break;
				}
				else
				{
					field[0][0] = player;
					thirdPtr1 = &field[0][0];
					c++;
					break;
				}
				// ------------------
			case 2:
				if (field[0][1] == player1 || field[0][1] == player2)
				{
					c = 0;
					break;
				}
				else
				{
					field[0][1] = player;
					thirdPtr1 = &field[0][1];
					c++;
					break;
				}
				// ------------------
			case 3:
				if (field[0][2] == player1 || field[0][2] == player2)
				{
					c = 0;
					break;
				}
				else
				{
					field[0][2] = player;
					thirdPtr1 = &field[0][2];
					c++;
					break;
				}
				// ------------------
			case 4:
				if (field[1][0] == player1 || field[1][0] == player2)
				{
					c = 0;
					break;
				}
				else
				{
					field[1][0] = player;
					thirdPtr1 = &field[1][0];
					c++;
					break;
				}
				// ------------------
			case 5:
				if (field[1][1] == player1 || field[1][1] == player2)
				{
					c = 0;
					break;
				}
				else
				{
					field[1][1] = player;
					thirdPtr1 = &field[1][1];
					c++;
					break;
				}
				// ------------------
			case 6:
				if (field[1][2] == player1 || field[1][2] == player2)
				{
					c = 0;
					break;
				}
				else
				{
					field[1][2] = player;
					thirdPtr1 = &field[1][2];
					c++;
					break;
				}
				// ------------------
			case 7:
				if (field[2][0] == player1 || field[2][0] == player2)
				{
					c = 0;
					break;
				}
				else
				{
					field[2][0] = player;
					thirdPtr1 = &field[2][0];
					c++;
					break;
				}
				// ------------------
			case 8:
				if (field[2][1] == player1 || field[2][1] == player2)
				{
					c = 0;
					break;
				}
				else
				{
					field[2][1] = player;
					thirdPtr1 = &field[2][1];
					c++;
					break;
				}
				// ------------------
			case 9:
				if (field[2][2] == player1 || field[2][2] == player2)
				{
					c = 0;
					break;
				}
				else
				{
					field[2][2] = player;
					thirdPtr1 = &field[2][2];
					c++;
					break;
				}
			default:
				c = 0;
				break;
			}
			if (c == 0)
			{
				cout << endl << "Den plads er allerede optaget!" << endl;
			}
		}
	}
}

void turnP2(char player)
{
	int c = 0;

	// First pointer
	if (counter2 == 0) {
		counter2++;
		*firstPtr2 = 's';
		while (c == 0)
		{
			cin >> num2;
			switch (num2)
			{
			case 1:
				if (field[0][0] == player1 || field[0][0] == player2)
				{
					c = 0;
					break;
				}
				else
				{
					field[0][0] = player;
					firstPtr2 = &field[0][0];
					c++;
					break;
				}
				// ------------------
			case 2:
				if (field[0][1] == player1 || field[0][1] == player2)
				{
					c = 0;
					break;
				}
				else
				{
					field[0][1] = player;
					firstPtr2 = &field[0][1];
					c++;
					break;
				}
				// ------------------
			case 3:
				if (field[0][2] == player1 || field[0][2] == player2)
				{
					c = 0;
					break;
				}
				else
				{
					field[0][2] = player;
					firstPtr2 = &field[0][2];
					c++;
					break;
				}
				// ------------------
			case 4:
				if (field[1][0] == player1 || field[1][0] == player2)
				{
					c = 0;
					break;
				}
				else
				{
					field[1][0] = player;
					firstPtr2 = &field[1][0];
					c++;
					break;
				}
				// ------------------
			case 5:
				if (field[1][1] == player1 || field[1][1] == player2)
				{
					c = 0;
					break;
				}
				else
				{
					field[1][1] = player;
					firstPtr2 = &field[1][1];
					c++;
					break;
				}
				// ------------------
			case 6:
				if (field[1][2] == player1 || field[1][2] == player2)
				{
					c = 0;
					break;
				}
				else
				{
					field[1][2] = player;
					firstPtr2 = &field[1][2];
					c++;
					break;
				}
				// ------------------
			case 7:
				if (field[2][0] == player1 || field[2][0] == player2)
				{
					c = 0;
					break;
				}
				else
				{
					field[2][0] = player;
					firstPtr2 = &field[2][0];
					c++;
					break;
				}
				// ------------------
			case 8:
				if (field[2][1] == player1 || field[2][1] == player2)
				{
					c = 0;
					break;
				}
				else
				{
					field[2][1] = player;
					firstPtr2 = &field[2][1];
					c++;
					break;
				}
				// ------------------
			case 9:
				if (field[2][2] == player1 || field[2][2] == player2)
				{
					c = 0;
					break;
				}
				else
				{
					field[2][2] = player;
					firstPtr2 = &field[2][2];
					c++;
					break;
				}
			default:
				c = 0;
				break;
			}
			if (c == 0)
			{
				cout << endl << "Den plads er allerede optaget!" << endl;
			}
		}
	}
	// Second pointer
	else if (counter2 == 1) {
		counter2++;
		*secondPtr2 = 's';
		while (c == 0)
		{
			cin >> num2;
			switch (num2)
			{
			case 1:
				if (field[0][0] == player1 || field[0][0] == player2)
				{
					c = 0;
					break;
				}
				else
				{
					field[0][0] = player;
					secondPtr2 = &field[0][0];
					c++;
					break;
				}
				// ------------------
			case 2:
				if (field[0][1] == player1 || field[0][1] == player2)
				{
					c = 0;
					break;
				}
				else
				{
					field[0][1] = player;
					secondPtr2 = &field[0][1];
					c++;
					break;
				}
				// ------------------
			case 3:
				if (field[0][2] == player1 || field[0][2] == player2)
				{
					c = 0;
					break;
				}
				else
				{
					field[0][2] = player;
					secondPtr2 = &field[0][2];
					c++;
					break;
				}
				// ------------------
			case 4:
				if (field[1][0] == player1 || field[1][0] == player2)
				{
					c = 0;
					break;
				}
				else
				{
					field[1][0] = player;
					secondPtr2 = &field[1][0];
					c++;
					break;
				}
				// ------------------
			case 5:
				if (field[1][1] == player1 || field[1][1] == player2)
				{
					c = 0;
					break;
				}
				else
				{
					field[1][1] = player;
					secondPtr2 = &field[1][1];
					c++;
					break;
				}
				// ------------------
			case 6:
				if (field[1][2] == player1 || field[1][2] == player2)
				{
					c = 0;
					break;
				}
				else
				{
					field[1][2] = player;
					secondPtr2 = &field[1][2];
					c++;
					break;
				}
				// ------------------
			case 7:
				if (field[2][0] == player1 || field[2][0] == player2)
				{
					c = 0;
					break;
				}
				else
				{
					field[2][0] = player;
					secondPtr2 = &field[2][0];
					c++;
					break;
				}
				// ------------------
			case 8:
				if (field[2][1] == player1 || field[2][1] == player2)
				{
					c = 0;
					break;
				}
				else
				{
					field[2][1] = player;
					secondPtr2 = &field[2][1];
					c++;
					break;
				}
				// ------------------
			case 9:
				if (field[2][2] == player1 || field[2][2] == player2)
				{
					c = 0;
					break;
				}
				else
				{
					field[2][2] = player;
					secondPtr2 = &field[2][2];
					c++;
					break;
				}
			default:
				c = 0;
				break;
			}
			if (c == 0)
			{
				cout << endl << "Den plads er allerede optaget!" << endl;
			}
		}
	}
	// Third pointer
	else if (counter2 == 2) {
		counter2 = 0;
		*thirdPtr2 = 's';
		while (c == 0)
		{
			cin >> num2;
			switch (num2)
			{
			case 1:
				if (field[0][0] == player1 || field[0][0] == player2)
				{
					c = 0;
					break;
				}
				else
				{
					field[0][0] = player;
					thirdPtr2 = &field[0][0];
					c++;
					break;
				}
				// ------------------
			case 2:
				if (field[0][1] == player1 || field[0][1] == player2)
				{
					c = 0;
					break;
				}
				else
				{
					field[0][1] = player;
					thirdPtr2 = &field[0][1];
					c++;
					break;
				}
				// ------------------
			case 3:
				if (field[0][2] == player1 || field[0][2] == player2)
				{
					c = 0;
					break;
				}
				else
				{
					field[0][2] = player;
					thirdPtr2 = &field[0][2];
					c++;
					break;
				}
				// ------------------
			case 4:
				if (field[1][0] == player1 || field[1][0] == player2)
				{
					c = 0;
					break;
				}
				else
				{
					field[1][0] = player;
					thirdPtr2 = &field[1][0];
					c++;
					break;
				}
				// ------------------
			case 5:
				if (field[1][1] == player1 || field[1][1] == player2)
				{
					c = 0;
					break;
				}
				else
				{
					field[1][1] = player;
					thirdPtr2 = &field[1][1];
					c++;
					break;
				}
				// ------------------
			case 6:
				if (field[1][2] == player1 || field[1][2] == player2)
				{
					c = 0;
					break;
				}
				else
				{
					field[1][2] = player;
					thirdPtr2 = &field[1][2];
					c++;
					break;
				}
				// ------------------
			case 7:
				if (field[2][0] == player1 || field[2][0] == player2)
				{
					c = 0;
					break;
				}
				else
				{
					field[2][0] = player;
					thirdPtr2 = &field[2][0];
					c++;
					break;
				}
				// ------------------
			case 8:
				if (field[2][1] == player1 || field[2][1] == player2)
				{
					c = 0;
					break;
				}
				else
				{
					field[2][1] = player;
					thirdPtr2 = &field[2][1];
					c++;
					break;
				}
				// ------------------
			case 9:
				if (field[2][2] == player1 || field[2][2] == player2)
				{
					c = 0;
					break;
				}
				else
				{
					field[2][2] = player;
					thirdPtr2 = &field[2][2];
					c++;
					break;
				}
			default:
				c = 0;
				break;
			}
			if (c == 0)
			{
				cout << endl << "Den plads er allerede optaget!" << endl;
			}
		}
	}
}

void printField()
{
	// Print field
	cout << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << field[i][j] << "  ";
		}
		cout << endl;
	}
	cout << endl;
}

bool checkWin(char player)
{
	// Check efter du har fjernet den fra en tidligere position, ellers vinder man for nemt

	if (field[0][0] == player && field[1][1] == player && field[2][2] == player)
	{
		return true;
	}
	else if (field[0][2] == player && field[1][1] == player && field[2][0] == player)
	{
		return true;
	}
	else if (field[0][0] == player && field[1][0] == player && field[2][0] == player)
	{
		return true;
	}
	else if (field[0][1] == player && field[1][1] == player && field[2][1] == player)
	{
		return true;
	}
	else if (field[0][2] == player && field[1][2] == player && field[2][2] == player)
	{
		return true;
	}
	else if (field[0][0] == player && field[0][1] == player && field[0][2] == player)
	{
		return true;
	}
	else if (field[1][0] == player && field[1][1] == player && field[1][2] == player)
	{
		return true;
	}
	else if (field[2][0] == player && field[2][1] == player && field[2][2] == player)
	{
		return true;
	}
	else
	{
		return false;
	}
}