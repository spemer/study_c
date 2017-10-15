/*Mult.c*/
#include<stdio.h>
#pragma warning (disable: 4996)
#define MULT_LMIT 5

/*1. Mult*/
void get_numb(int numb)
{
	int result;
	int i;
	for (i = 1; i <= 9; i++)
	{
		result = numb * i;
		printf("%d * %d = %d\n", numb, i, result);
	}
}
void calc()
{
	int numb;
	printf("Input number: ");
	scanf("%d", &numb);
	get_numb(numb);
}


/*2. Avg*/
void avg()
{
	int getNumb, i;
	int total = 0;
	int numbToCalc[100];
	printf("Input any number below %d: ", MULT_LMIT);
	scanf("%d", &getNumb);
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
	for (i = 0; i < getNumb; i++)
	{
		printf("Input number %d: ", i + 1);
		scanf("%d", &numbToCalc[i]);
		total = total + numbToCalc[i];
	}
	float avg = (float)total / (float)getNumb;
	printf("\nTotal: %d\nAverage: %0.1f\n", total, avg);
}


void select_quiz_numb();
/*Ask again*/
int main()
{
	int ask;
	do
	{
		select_quiz_numb();
		printf("\nAgain? Yes: 1, No: 0\n");
		scanf("%d", &ask);
	} while (ask == 1);
	return 0;
}

void select_quiz_numb()
{
	int get_quiz_numb;
	printf("1. Mult\n");
	printf("2. Avg\n");
	scanf("%d", &get_quiz_numb);
	if (get_quiz_numb == 1)
	{
		calc();
	}
	else if (get_quiz_numb == 2)
	{
		avg();
	}
}