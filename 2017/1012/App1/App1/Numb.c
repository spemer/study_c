/*Numb.c*/
#include <stdio.h>
#pragma warning (disable:4996)
#define MULT_LMIT 5
void Numb();
int main(void)
{
	int ask;
	do
	{
		Numb();
		printf("\nAgain? Yes: 1, No: 0\n");
		scanf("%d", &ask);
	} while (ask == 1);
	return 0;
}
void Numb()
{
	int getNumb, i, total = 0, avg = 0;
	int numbToCalc[100];
	printf("Input any number below %d: ", MULT_LMIT);
	scanf("%d", &getNumb);
	/*Get user number*/
	if (getNumb > MULT_LMIT || getNumb == 0)
	{
		do
		{
			printf("Input number again except zero: ");
			scanf("%d", &getNumb);
		} while (getNumb > MULT_LMIT);
	}
	else
	{
		printf("\nYour Number: %d\n", getNumb);
	}
	/*Calc user number*/
	for (i = 0; i < getNumb; i++)
	{
		printf("Input number %d: ", i + 1);
		scanf("%d", &numbToCalc[i]);
		total = total + numbToCalc[i];
	}
	/*Total, average*/
	avg = total / getNumb;
	printf("\nTotal: %d\nAverage: %d\n", total, avg);
}