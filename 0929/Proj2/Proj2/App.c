#include<stdio.h>
#pragma warning (disable:4996)
void Quiz(void);

int main(void)
{
	int i;

	do
	{
		Quiz();

		printf("\nAgain?\nYes: 1, No: 0\n");
		scanf("%d", &i);
		printf("\n");
	} while (i == 1);

	return 0;
}

void Quiz(void)
{
	int i;
	int First, Second, Sum;
	int Count = 0;

	printf("Input first number: ");
	scanf("%d", &First);
	printf("Input secund number: ");
	scanf("%d", &Second);
	
	do
	{
		printf("\nFirst: %d\nSecond: %d\n", First, Second);
		printf("%d + %d: ", First, Second);
		scanf("%d", &Sum);

		Count += 1;
	} while (Sum != First + Second);

	printf("\nAttempt: %d\n", Count);
}