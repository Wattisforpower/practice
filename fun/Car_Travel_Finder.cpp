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

	printf("Would you like to return to main menu? if so press 1 \n");
	int exit;
	scanf("%d", &exit);
	
	if (exit == 1) {
		main();
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
}