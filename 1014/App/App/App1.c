/*App1.c*/
#include<stdio.h>
#pragma warning (disable 4996)
#define NUMB_MAX 10
int getMax(int input[], int size)
{
	int max;
	int i;
	for (i = 0; i < size; i ++)
	{

	}
	return max;
}
int getMin()
{

}
int getAvg()
{

}
int main(void)
{
	int i;
	int input[NUMB_MAX];
	for (i = 0; i < NUMB_MAX; i++)
	{
		printf("Input Number %d: ", i + 1);
		scanf("%d", &input[i]);
	}
	printf("Max numb: %d", getMax(input, NUMB_MAX));
	return 0;
}