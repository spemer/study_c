/*Array.c*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#pragma warning (disable:4996)
#define ROWS 3
#define COLS 3
#define MAX 100
int main(void)
{
	int r, c;
	int A[ROWS][COLS], B[ROWS][COLS],
		SUM[ROWS][COLS], SUB[ROWS][COLS];
	int SUM_sum = 0; float SUM_avg = 0;
	int SUB_sum = 0; float SUB_avg = 0;
	srand(time(0));

	printf("Array A\n");
	for (r = 0; r < ROWS; r++)
	{
		for (c = 0; c < COLS; c++)
		{
			A[r][c] = rand() % MAX;
			printf("%d\t", A[r][c]);
		}
		printf("\n");
	}
	printf("\n====================\n");

	printf("\nArray B\n");
	for (r = 0; r < ROWS; r++)
	{
		for (c = 0; c < COLS; c++)
		{
			B[r][c] = rand() % MAX;
			printf("%d\t", B[r][c]);
		}
		printf("\n");
	}
	printf("\n====================\n");

	printf("\nArray A + B\n");
	for (r = 0; r < ROWS; r++)
	{
		for (c = 0; c < COLS; c++)
		{
			SUM[r][c] = A[r][c] + B[r][c];
			printf("%d\t", SUM[r][c]);
			SUM_sum = SUM_sum + SUM[r][c];
		}
		printf("\n");
	}
	SUM_avg = (float)SUM_sum / (float)(ROWS * COLS);
	printf("\n====================\n");

	printf("\nArray A - B\n");
	for (r = 0; r < ROWS; r++)
	{
		for (c = 0; c < COLS; c++)
		{
			SUB[r][c] = A[r][c] - B[r][c];
			printf("%d\t", SUB[r][c]);
			SUB_sum = SUB_sum + SUB[r][c];
		}
		printf("\n");
	}
	SUB_avg = (float)SUB_sum / (float)(ROWS * COLS);
	printf("\n====================\n\n");
	printf("Sum's sum: %d\nSum's avg: %0.2f\n\n", SUM_sum, SUM_avg);
	printf("Sub's sum: %d\nSub's avg: %0.2f", SUB_sum, SUB_avg);
	getch();
	return 0;
}