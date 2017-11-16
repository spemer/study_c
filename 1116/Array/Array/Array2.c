/*Array2.c*/
#include<stdio.h>
#pragma warning (disable:4996)
#define SIZE 15
int main(void)
{
	int i;
	int a[SIZE], b[SIZE];
	for (i = 0; i < SIZE; i++)
	{
		a[i] = i + 1;
		b[i] = (i + 1) * 10;
		//각 배열에 값을 대입
		//a는 1씩 증가, b는 10씩 증가
	}
	for (i = 0; i < SIZE; i++)
	{
		printf("a[%d] = %d,\t", i, a[i]);
		printf("b[%d] = %d,\t", i, b[i]);
		printf("합계: %d,\t", a[i] + b[i]);
		printf("평균: %0.2f\n\n", ((float)a[i] + (float)b[i]) / 2);
		//평균은 소수점으로 출력하기 위헤서 형변환
	}
	getch();
	return 0;
}