#include <stdio.h>
#include <iostream>

extern int main(); // Allows for the user to return back to the main menu

static void movement(float Fuel, float Miles, float mpg) {
	if ((Miles * mpg) < Fuel) {
		float RemainingFuel = Fuel - (Miles * mpg);
		float TravelledMiles = (Miles / mpg);
		printf("You have travelled %f miles \n", TravelledMiles);
		printf("You have %f \n", RemainingFuel);
	}
	else if ((Miles * mpg) > Fuel) {
		printf("You do not have enough Fuel Sorry. \n");
	}
}

void CarTravelFinder() {
	system("cls");
	float Fuel, Miles, mpg;
	printf("Please Enter Amount of fuel you have in Gallon: \n");
	scanf("%f", &Fuel);
	printf("Please Enter how many miles you would like to travel: \n");
	scanf("%f", &Miles);
	printf("Please Enter the vehicles Miles Per Gallon: \n");
	scanf("%f", &mpg);

	movement(Fuel, Miles, mpg);

	printf("Thankyou for using the converter, would you like to use it again or go back to main? Y = Main and N == Use Again\n");
	char val;
	scanf("%c", &val);
	if (val == 'y') {
		main();
	}
	else if (val == 'Y') {
		main();
	}
	else if (val == 'n') {
		return CarTravelFinder();
	}
	else if (val == 'N') {
		return CarTravelFinder();
	}

}