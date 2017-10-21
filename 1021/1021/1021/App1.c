/*App1.c*/
#include<stdio.h>
#pragma warning (disable: 4996)
int calc_sum(int left, int right)
{
	return left + right;
}
int calc_minus(int left, int right)
{
	return left - right;
}
int calc_multi(int left, int right)
{
	return left * right;
}
float calc_divide(int left, int right)
{
	return (float)left / (float)right;
}
void calc()
{
	int left, right;
	char op;
	printf("Calc: ");
	scanf("%d %c %d", &left, &op, &right);
	if (op != '/')
	{
		int result;
		switch (op)
		{
		case '+':
			result = calc_sum(left, right);
			break;
		case '-':
			result = calc_minus(left, right);
			break;
		case '*':
			result = calc_multi(left, right);
			break;
		}
		printf("\n%d %c %d = %d\n", left, op, right, result);
	}
	else if (op == '/')
	{
		do
		{
			if (left == 0 || right == 0)
			{
				printf("Cannot use 0 while divide");
				break;
			}
			else
			{
				calc_divide(left, right);
				printf("\n%d %c %d = %0.2f\n", left, op, right, calc_divide(left, right));
			}
		} while (left == 0 || right == 0);
	}
}
int main()
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