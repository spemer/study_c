/*Array3.c*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#pragma warning (disable:4996)
#define SIZE 100
int main(void)
{
	int i;
	int a[SIZE];
	int min = 100, max = 0; //최솟값과 최댓값을 구하기 위해 선언
	int min_index, max_index; //최솟값과 최댓값의 인덱스가 들어갈 자리
	srand(time(0)); //매번 다른 랜덤값을 생성
	for (i = 0; i < SIZE; i++)
	{
		a[i] = rand() % SIZE; //랜덤함수로 만들어진 수를 대입해주기
		printf("a[%d] = %d	", i, a[i]);
		if ((i + 1) % 10 == 0 && i > 0)
			printf("\n"); //10마다 줄바꿈
		if (a[i] <= min) //반복문을 반복하면서 최솟값을 찾아나가기
		{
			min = a[i];
			min_index = i;
		}
		if (a[i] >= max) //반복문을 반복하면서 최댓값을 찾아나가기
		{
			max = a[i];
			max_index = i;
		}
	}
	printf("\n\n최솟값 [%d] = %d\n최댓값 [%d] = %d", min_index, min, max_index, max);
	getch();
	return 0;
}