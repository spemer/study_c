/*Avg.c*/
#include<stdio.h>
#pragma warning (disable: 4996)
#define NUMMAX 10
float find_max(float input[], int size)
{
	float max = input[0];
	int i;
	for (i = 0; i < size; i++)
	{
		if (input[i] >= max)
		{
			max = input[i];
		}
	}
	return max;
}

float find_min(float input[], int size)
{
	float min = input[0];
	int i;
	for (i = 0; i < size; i++)
	{
		if (input[i] <= min)
		{
			min = input[i];
		}
	}
	return min;
}

float calc_avg(float input[], int size, float max, float min)
{
	float sum = 0;
	float result;
	int i;
	for (i = 0; i < size; i++)
	{
		sum += input[i];
	}
	sum = sum - find_max(input, NUMMAX) - find_min(input, NUMMAX);
	result = sum / (size - 2);
	return result;
}

void calc_main(void)
{
	float input[NUMMAX];
	int i;
	for (i = 0; i < NUMMAX; i++)
	{
		if (i > 8)
		{
			printf("Input number %d: ", i + 1);
			scanf("%f", &input[i]);
		}
		else
		{
			printf("Input number %d:  ", i + 1);
			scanf("%f", &input[i]);
		}
	}
	printf("\n");
	printf("Max numb: %0.2f\n", find_max(input, NUMMAX));
	printf("Min numb: %0.2f\n", find_min(input, NUMMAX));
	printf("Avg numb: %0.2f\n", calc_avg(input, NUMMAX, find_max(input, NUMMAX), find_min(input, NUMMAX)));
}

int main(void)
{
	int ask;
	do
	{
		calc_main();
		printf("\nAgain? Yes: 1, No: 0\n");
		scanf("%d", &ask);
	} while (ask == 1);
	return 0;
}