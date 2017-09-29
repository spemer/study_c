#include<stdio.h>
#pragma warning (disable:4996)
#define SET_MONEY 1000
void Calc(void);
int main(void)
{
	int a;
	do
	{
		Calc();
		printf("Again?\nYes: 1, No: 0 : ");
		scanf("%d", &a);

	} while (a == 1);
	return 0;
}
void Calc(void)
{
	int price, change, hund, ten;
	printf("Price: ");
	scanf("%d", &price);
	printf("\n");

	printf("You have %dWon\n", SET_MONEY);
	while (price > SET_MONEY)
	{
		printf("Can't buy.\n");
		printf("Re-enter the price: ");
		scanf("%d", &price);
		printf("\n");
	}

	change = SET_MONEY - price;
	hund = change / 100;
	ten = (change - (hund * 100)) / 10;

	printf("Price: %dWon\n", price);
	printf("Change: %dWon\n", change);
	printf("\n==========\n");
	printf("100Won: %d\n", hund);
	printf("10Won: %d", ten);
	printf("\n==========\n");
}