/*
	Created By Ethan Barrett
	Includes
	Primes of a number Values
	Converter
	random number generator
	Time Functions
*/



// Modules
#include <iostream> // c++ input/output
#include <stdio.h> // c input/output


extern void primes();
extern void converter_main();
extern void CarTravelFinder();
extern void TimeMain();
extern void PasswordMain();

int main() {
	system("cls");
	int selection;

	printf("Please select one of the following to run the programme \n");
	printf("1 - Is a number a prime. \n");
	printf("2 - Machinists Converter \n");
	printf("3 - Car Travel Finder \n");
	printf("4 - Time \n");
	printf("5 - 12 character long password generator \n");


	scanf("%d", &selection);

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
	}

	return 0;
}