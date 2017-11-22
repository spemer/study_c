#include<stdio.h>

int main(void)
{
	int x;
	int y;
	int sum;
	int sub;
	int mult;
	int div;

	printf("x: ");
	scanf_s("%d", &x);
	printf("y: ");
	scanf_s("%d", &y);

	sum = x + y;
	sub = x - y;
	mult = x * y;
	div = x / y;

	printf("\n=====\n");
	printf("%d + %d = %d\n", x, y, sum);
	printf("%d - %d = %d\n", x, y, sub);
	printf("%d * %d = %d\n", x, y, mult);
	printf("%d / %d = %d\n", x, y, div);
	printf("=====\n");



	getch();

	return 0;
}