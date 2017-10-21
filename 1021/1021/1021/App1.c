/*App1.c*/
#include<stdio.h>
#pragma warning (disable: 4996)
int calc_sum(int left, int right)
{
	int result;
	return result = left + right;
}
int calc_minus(int left, int right)
{
	int result;
	return result = left - right;
}
int calc_multi(int left, int right)
{
	int result;
	return result = left * right;
}
float calc_divide(int left, int right)
{
	float result;
	return result = (float)left / (float)right;
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
		if (left == 0 || right == 0)
		{
			printf("You can't input 0 while divide");
		}
		else
		{
			calc_divide(left, right);
			printf("\n%d %c %d = %0.2f\n", left, op, right, calc_divide(left, right));
		}
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
	} while (ask == 1);
	return 0;
}