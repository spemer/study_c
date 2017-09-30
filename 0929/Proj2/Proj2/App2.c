#include<stdio.h>
#pragma warning (disable: 4996)

int main(void)
{
	int i;
	int Numb[5];
	int Max;

	Max = Numb[0];

	for (i = 0; i < 5; i++)
	{
		printf("Input any number: ");
		scanf("%d", &Numb[i]);

		if (Max < Numb[i])
		{
			Max = Numb[i];
		}
	}

	printf("\nBiggest number: %d", Max);

	getch();
	return 0;
}