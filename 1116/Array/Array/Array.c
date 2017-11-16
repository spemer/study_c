/*Array.c*/
#include <stdio.h>
#pragma warning (disable:4996)
#define SIZE 5
int main(void)
{
	int i;
	int scores[SIZE];
	for (i = 0; i < SIZE; i++)
	{
		scores[i] = (i + 1) * 10;
		printf("scores[%d]=%d\n", i, scores[i]);
	}
	getch();
	return 0;
}