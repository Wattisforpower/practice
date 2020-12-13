#include <iostream>
#include <stdio.h>
#include <math.h>
#include <vector>

using namespace std;

void Maths_Main();
extern int main();

static double** CreateDynamicArray(int rows, int cols) {
	double ** array = new double*[rows];

	for (int i = 0; i < rows; i++) {
		array[i] = new double[cols];
	}

	return array;

}

static void Transpose_Main() {
	system("cls");

	int rows, cols;

	printf("Please enter the number of rows the Matrix is\n");
	scanf("%d", &rows);
	printf("Please enter the number of columns the Matrix is\n");
	scanf("%d", &cols);

	double** array = CreateDynamicArray(rows, cols);

	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");

	printf("You will now be asked for the values in the Matrix \n");

	for (int row = 0; row < rows; row++) {
		for (int col = 0; col < cols; col++) {
			printf("Please enter the value at position; row = %d, column = %d ", row, col);
			cin >> array[row][col]; // used cin instead of scanf as scanf was producing issues
		}
	}

	printf("\n");
	printf("Generated Matrix \n");

	for (int row = 0; row < rows; row++) {
		for (int col = 0; col < cols; col++) {
			printf("%f    ", array[row][col]);
		}
		printf("\n");
	}

	// Transpose the Matrix
	for (int row = 0; row < rows; row++) {
		for (int col = row; col < cols; col++) {
			double temp = array[row][col];
			array[row][col] = array[col][row];
			array[col][row] = temp;
		}
	}

	printf("\n");
	printf("Generated Transposed Matrix \n");

	for (int row = 0; row < rows; row++) {
		for (int col = 0; col < cols; col++) {
			printf("%f    ", array[row][col]);
		}
		printf("\n");
	}

	int exit;
	printf("Would you like to return to the Maths Menu? if so press 1");
	scanf("%d", &exit);

	if (exit == 1) {
		Maths_Main();
	}
}



void Maths_Main() {
	system("cls");
	int option;
	printf("What Math Function would you like to use today? \n");
	printf("1 - Main Menu \n");
	printf("2 - Transposing an Array \n");
	scanf("%d", &option);

	switch (option) {
	case 1:
		main();
		break;
	case 2:
		Transpose_Main();
		break;
	}
}