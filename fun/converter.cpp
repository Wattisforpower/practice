#include <stdio.h>
#include <math.h>
#include <iostream>

extern int main(); // Allows for the return to the main section to choose another file.

static void FPM_TO_MPM() { // converts from Feet per Minute to Metres per Minute
	int Val;
	float response;
	printf("Please enter a Value. \n");
	scanf("%d", &Val);
	
	response = (Val * 0.3048);

	printf("%f", response);
}

static void MPM_TO_FPM() { // converts from Metres per Minute to Feet per Minute
	int Val;
	float response;
	printf("Please enter a Value. \n");
	scanf("%d", &Val);

	response = (Val * 3.2808);

	printf("%f", response);
}



void converter_main() { // Main conversion function which houses all of the static void functions
	system("cls");
	while (true) {
		int selection;
		printf("Please select a converter \n");
		printf("1 - Return to Start \n");
		printf("2 - FPM_to_MPM \n");
		printf("3 - MPM_to_FPM \n");

		scanf("%d", &selection);

		switch (selection) {
		case 1:
			main();
			break;
		case 2:
			FPM_TO_MPM();
			break;
		case 3:
			MPM_TO_FPM();
			break;
		}
		
	}
}