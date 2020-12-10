#include <stdio.h>
#include <iostream>
#include <time.h>
#include <dos.h>

extern int main();
void TimeMain();

static void CTime() {
	while (true) {
		time_t t = time(NULL);
		char* tm = ctime(&t);
		printf("Time:  %s", tm);

		_sleep(1000);
		system("cls");
	}
}

static void Alarm_Minutes() {
	float Timer, Timer_seconds;
	printf("Please enter the number of minutes you want the timer for: \n");
	scanf("%f", &Timer);

	Timer_seconds = (Timer * 60);

	while (Timer_seconds > 0) {
		printf("%f seconds remaining", Timer_seconds);

		_sleep(1000);
		system("cls");
		Timer_seconds--;
	}

	printf("Timer is complete");
	
	for (int t = 0; t < 5; t++) {
		printf("\a");
		_sleep(1000);
		printf("");
		_sleep(1000);
	}

	TimeMain();

}

static void Alarm_Seconds() {
	float Timer;
	printf("Please enter the number of seconds you want the timer for: \n");
	scanf("%f", &Timer);

	while (Timer > 0) {
		printf("%f seconds remaining", Timer);

		_sleep(1000);
		system("cls");
		Timer--;
	}

	printf("Timer is complete");

	for (int t = 0; t < 5; t++) {
		printf("\a");
		_sleep(1000);
		printf("");
		_sleep(1000);
	}

	TimeMain();
}

void TimeMain() {
	system("cls");
	int Option; // used for the switch case.
	printf("Below are the following Options which you can do; \n");
	printf("1 - Return to Main Menu \n");
	printf("2 - Current Time \n");
	printf("3 - Alarm Minutes \n");
	printf("4 - Alarm Seconds \n");

	scanf("%d", &Option);

	switch (Option) {
	case 1:
		main();
	case 2:
		CTime();
	case 3:
		Alarm_Minutes();
	case 4:
		Alarm_Seconds();
	}

}