/*Func_calc.c*/
#include<stdio.h>
#pragma warning (disable: 4996)
int add(int x, int y) { return x + y; }
int sub(int x, int y) { return x - y; }
int mul(int x, int y) { return x * y; }
double div(int x, int y) { return (double)x / (double)y; }
int get_integer()
{
	int value;
	printf("Input int : ");
	scanf("%d", &value);
	return value;
}
char get_character()
{
	char ch;
	printf("Input char: ");
	scanf("%c", &ch);
	return ch;
}
int power(int x, int y)
{
	int i;
	int result = 1;
	for (i = 0; i < y; i++)
		result *= x;
	return result;
}
void calc()
{
	int x, y; char op, temp;
	x = get_integer();
	scanf("%c", &temp);
	op = get_character();
	y = get_integer();
	if (op != '/')
	{
		int result;
		switch (op)
		{
		case '+':
			result = add(x, y);
			break;
		case '-':
			result = sub(x, y);
			break;
		case '*':
			result = mul(x, y);
			break;
		case 'p':
			result = power(x, y);
			break;
		}
		printf("\n%d %c %d = %d\n", x, op, y, result);
	}
	else if (op == '/')
	{
		double result;
		do
		{
			if (x == 0 || y == 0)
			{
				printf("\nCannot use 0 while divide\n");
				break;
			}
			else
			{
				result = div(x, y);
				printf("\n%d %c %d = %0.2lf\n", x, op, y, div(x, y));
			}
		} while (x == 0 || y == 0);
	}
}
int main(void)
{
	int ask;
	do
	{
		calc();
		printf("\nAgain? No: 0, Yes: 1\n");
		scanf("%d", &ask);
		puts("");
	} while (ask == 1);
	return 0;
}