#include <stdio.h>
#include <math.h>
#include <iostream>

extern int main();

void primes(){
	system("cls");
	int Val, exit, flag = 0;
	printf("Please Enter a Value and we will check if its a prime \n");
	scanf("%d", &Val);

	for (int i = 2; i <= Val / 2; i++) {
		if (Val % i == 0) {
			flag = 1;
			break;
		}
	}

	if (Val == 1) {
		printf("1 is not a prime \n");
	}
	else {
		if (flag == 0) {
			printf("%d is a prime number. \n", Val);
		}
		else {
			printf("%d is not a prime number. \n", Val);
		}
	}

	printf("Please press 1 to go back to the main menu \n");
	scanf("%d", &exit);

	if (exit == 1) {
		main();
	}

}