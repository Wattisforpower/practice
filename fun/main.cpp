/*
	Created By Ethan Barrett
	Includes
	Primes of a number Values
	Converter
	random number generator
	Time Functions
	differentiation/integration
*/



// Modules
#include <iostream> // c++ input/output
#include <stdio.h> // c input/output

using namespace std;

extern void primes();
extern void converter_main();
extern void CarTravelFinder();
extern void TimeMain();
extern void Maths_Main();
extern void TicTacToe_Main();

int main() {
	system("cls");
	int selection;

	printf("Please select one of the following to run the programme \n");
	printf("1 - Is a number a prime. \n");
	printf("2 - Machinists Converter \n");
	printf("3 - Car Travel Finder \n");
	printf("4 - Time \n");
	printf("5 - Maths \n");
	printf("6 - TicTacToe \n");

	cin >> selection;

	switch (selection) {
	case 1:
		primes();
		break;
	case 2:
		converter_main();
		break;
	case 3:
		CarTravelFinder();
		break;
	case 4:
		TimeMain();
		break;
	case 5:
		Maths_Main();
		break;
	case 6:
		TicTacToe_Main();
		break;
	}

	return 0;
}