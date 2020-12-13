#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

extern int main();
void TicTacToe_Main();


void PvP_Main() {
	system("cls");

	char table[3][3];

	// initialise the table with -

	
	for (int row = 0; row < 3; row++) {
		for (int col = 0; col < 3; col++) {
			table[row][col] = '-';
		}
	}

	int go = 0;

	printf("Would you like X or O to go first. default O \n");
	char option;
	char player;
	char prev_player;
	cin >> option;

	player = toupper(option);

	for (int row = 0; row < 3; row++) {
		for (int col = 0; col < 3; col++) {
			printf("%c  ", table[row][col]);
		}
		printf("\n");
	}

	for (go; go < 9;) {
		if ((player == 'O') && (go < 9)){
			int rows, cols;
			prev_player = player;

			printf("Please enter the row and column when asked to place your O \n");
			printf("row: ");
			cin >> rows;
			printf("column: ");
			cin >> cols;
			
			// Game logic to see if the space is available
			if (table[(rows - 1)][(cols - 1)] == '-') {
				table[(rows - 1)][(cols - 1)] = 'O';
			}
			else {
				printf("Sorry you cannot place it there, you therefore forfiet your go. \n");
			}

			// Print the updated code
			for (int row = 0; row < 3; row++) {
				for (int col = 0; col < 3; col++) {
					printf("%c  ", table[row][col]);
				}
				printf("\n");
			}

			// Changes Go
			player = 'X';

			// Increases Go Count
			go++;
		}

		else if ((player == 'X') && (go < 9)) {
			int rows, cols;
			prev_player = player;

			printf("Please enter the row and column when asked to place your X \n");
			printf("row: ");
			cin >> rows;
			printf("column: ");
			cin >> cols;

			// Game logic to see if the space is available
			if (table[(rows - 1)][(cols - 1)] == '-') {
				table[(rows - 1)][(cols - 1)] = 'X';
			}
			else {
				printf("Sorry you cannot place it there, you therefore forfiet your go. \n");
			}

			// Print the updated code
			for (int row = 0; row < 3; row++) {
				for (int col = 0; col < 3; col++) {
					printf("%c  ", table[row][col]);
				}
				printf("\n");
			}

			// Changes Go
			player = 'O';

			// Increases Go Count
			go++;
		}

		// check for win
		if (go < 9) {
			// Top row
			if ((table[0][0] == prev_player) && (table[0][1] == prev_player) && (table[0][2] == prev_player)) {
				printf("%c Has won the game \n", prev_player);
				break;
			}
			// Middle Row
			else if ((table[1][0] == prev_player) && (table[1][1] == prev_player) && (table[1][2] == prev_player)) {
				printf("%c Has won the game \n", prev_player);
				break;
			}
			// Bottom Row
			else if ((table[2][0] == prev_player) && (table[2][1] == prev_player) && (table[2][2] == prev_player)) {
				printf("%c Has won the game \n", prev_player);
				break;
			}
			
			// Columns
			// First Column
			else if ((table[0][0] == prev_player) && (table[1][0] == prev_player) && (table[2][0] == prev_player)) {
				printf("%c Has won the game \n", prev_player);
				break;
			}
			// Middle Column
			else if ((table[0][1] == prev_player) && (table[1][1] == prev_player) && (table[2][1] == prev_player)) {
				printf("%c Has won the game \n", prev_player);
				break;
			}
			// Bottom Column
			else if ((table[0][2] == prev_player) && (table[1][2] == prev_player) && (table[2][2] == prev_player)) {
				printf("%c Has won the game \n", prev_player);
				break;
			}

			// Diagonals
			// Diagonal 1
			else if ((table[0][0] == prev_player) && (table[1][1] == prev_player) && (table[2][2] == prev_player)) {
				printf("%c Has won the game \n", prev_player);
				break;
			}
			// Diagonal 2
			else if ((table[0][2] == prev_player) && (table[1][1] == prev_player) && (table[2][0] == prev_player)) {
				printf("%c Has won the game \n", prev_player);
				break;
			}
		}
	}

	printf("Thankyou for playing TicTacToe PvP. Please look at the following options \n");
	int exitoption;
	printf("1 - TicTacToe Main Menu \n");
	printf("2 - Play Again \n");
	cin >> exitoption;

	switch (exitoption) {
	case 1:
		TicTacToe_Main();
		break;
	case 2:
		return PvP_Main();
		break;
	}
}





void TicTacToe_Main() {
	system("cls");
	
	//printf("This game is played with 0 and 1");
	printf("Menu Options \n");
	printf("1 - Return to Main \n");
	printf("2 - Play Against Someone Else \n");
	int option;
	scanf("%d", &option);

	switch (option) {
	case 1:
		main();
		break;
	case 2:
		PvP_Main();
		break;
	}

}