#include<stdio.h>
#pragma warning (disable: 4996)
#define FARE_YOUNG 1200
#define FARE_ADULT 1400
#define FARE_ELDER 1000
#define AGE_YOUNG 12
#define AGE_ELDER 65
void Fare(void);

int main(void)
{
	int i;
	do
	{
		Fare();

		printf("\nAgain?\nYes: 1, No: 0\n");
		scanf("%d", &i);
		printf("\n");

	} while (i == 1);

	return 0;
}

void Fare(void)
{
	int PassNumb = 0;
	int PassengerAge[100], Fare[100];
	int YoungNumb = 0, AdultNumb = 0, ElderNumb = 0, TotalFare = 0;
	int i;

	printf("Number of Passenger: ");
	scanf("%d", &PassNumb);
	printf("\n");

	for (i = 0; i < PassNumb; i++)
	{
		printf("Age of Passenger %d: ", i + 1);
		scanf("%d", &PassengerAge[i]);

		if (PassengerAge[i] <= AGE_YOUNG)
		{
			Fare[i] = FARE_YOUNG;
			YoungNumb += 1;
		}
		else if (PassengerAge[i] > AGE_YOUNG && PassengerAge[i] < AGE_ELDER)
		{
			Fare[i] = FARE_ADULT;
			AdultNumb += 1;
		}
		else if (PassengerAge[i] >= AGE_ELDER)
		{
			Fare[i] = FARE_ELDER;
			ElderNumb += 1;
		}

		TotalFare = TotalFare + Fare[i];
	}

	printf("\nTotal Passenger: %d\n", PassNumb);
	printf("Young: %d * %d = %d\n", YoungNumb, FARE_YOUNG, YoungNumb * FARE_YOUNG);
	printf("Adult: %d * %d = %d\n", AdultNumb, FARE_ADULT, AdultNumb * FARE_ADULT);
	printf("Elder: %d * %d = %d\n", ElderNumb, FARE_ELDER, ElderNumb * FARE_ELDER);
	printf("\nTotal Fare: %d\n", TotalFare);
}