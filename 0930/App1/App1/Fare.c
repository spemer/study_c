#include<stdio.h>
#pragma warning (disable: 4996)
#define USER_MONEY 15000
#define MAX_PSNGR 8
#define AGE_YOUNG 12
#define AGE_ELDER 65
#define FARE_YOUNG 1200
#define FARE_ADULT 1400
#define FARE_ELDER 1000

void Fare(void);

int main(void)
{
	int a;

	do
	{
		Fare();
		printf("\n\nAgain?\nYes: 1, No: 0\n");
		scanf("%d", &a);
	} while (a == 1);

	return 0;
}

void Fare(void)
{
	int i, PsngrNumb, PsngrAge[100], PsngrFare[100];
	int YoungNumb = 0, AdultNumb = 0, ElderNumb = 0, Total = 0, Change = 0;

	do
	{
		printf("Number of Passenger: ");
		scanf("%d", &PsngrNumb);

		if (PsngrNumb > MAX_PSNGR)
		{
			printf("\nCannot take over %d passenger\n", MAX_PSNGR);
		}
		else if (PsngrNumb <= MAX_PSNGR)
		{
			printf("\n");
			for (i = 0; i < PsngrNumb; i++)
			{
				printf("Age of Passenger %d: ", i + 1);
				scanf("%d", &PsngrAge[i]);

				if (PsngrAge[i] <= AGE_YOUNG)
				{
					PsngrFare[i] = FARE_YOUNG;
					YoungNumb += 1;
				}
				else if (PsngrAge[i] > AGE_YOUNG && PsngrAge[i] < AGE_ELDER)
				{
					PsngrFare[i] = FARE_ADULT;
					AdultNumb += 1;
				}
				else if (PsngrAge[i] >= AGE_ELDER)
				{
					PsngrFare[i] = FARE_ELDER;
					ElderNumb += 1;
				}
				Total = Total + PsngrFare[i];
			}
			printf("\nTotal passenger: %d\n", PsngrNumb);
			printf("Young: %d * %d = %d\n", YoungNumb, FARE_YOUNG, YoungNumb * FARE_YOUNG);
			printf("Adult: %d * %d = %d\n", AdultNumb, FARE_ADULT, AdultNumb * FARE_ADULT);
			printf("Elder: %d * %d = %d\n", ElderNumb, FARE_ELDER, ElderNumb * FARE_ELDER);
			printf("Total Price: %d\n", Total);

			Change = USER_MONEY - Total;
			printf("\nYou have %d\n", USER_MONEY);
			printf("Change: %d - %d = %d\n", USER_MONEY, Total, Change);
		}
	} while (PsngrNumb > MAX_PSNGR);
}