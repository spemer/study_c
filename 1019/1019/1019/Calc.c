/*Calc.c*/
#include<stdio.h>
#pragma warning (disable: 4996)
int calc_sum(int left, int right)
{
	int result = left + right;
	return result;
}
int calc_minus(int left, int right)
{
	int result = left - right;
	return result;
}
int calc_multi(int left, int right)
{
	int result = left * right;
	return result;
}
float calc_divide(int left, int right)
{
	float result = (float)left / (float)right;
	return result;
}
void Calc()
{
	int left, right;
	char op;
	do
	{
		printf("Input left number, operator and right number: ");
		scanf("%d %c %d", &left, &op, &right);
		if (op == '/' && right == 0)
		{
			printf("\nRight number cannot be 0\n");
		}
		else
		{
			if (op == '/' && right != 0)
			{
				float result_print = calc_divide(left, right);
				printf("%d %c %d = %0.2f\n", left, op, right, result_print);
			}
			else
			{
				int result_print;
				switch (op)
				{
				case '+':
					result_print = calc_sum(left, right);
					break;
				case '-':
					result_print = calc_minus(left, right);
					break;
				case '*':
					result_print = calc_multi(left, right);
					break;
				}
				printf("%d %c %d = %d\n", left, op, right, result_print);
			}
		}
	} while (op == '/' && right == 0);
}
int main()
{
	int ask;
	do {
		Calc();
		printf("\nAgain? Yes: 1, No: 0\n");
		scanf("%d", &ask);
		puts("");
	} while (ask == 1);
	return 0;
}