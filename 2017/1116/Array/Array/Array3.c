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
	int min = 100, max = 0; //�ּڰ��� �ִ��� ���ϱ� ���� ����
	int min_index, max_index; //�ּڰ��� �ִ��� �ε����� �� �ڸ�
	srand(time(0)); //�Ź� �ٸ� �������� ����
	for (i = 0; i < SIZE; i++)
	{
		a[i] = rand() % SIZE; //�����Լ��� ������� ���� �������ֱ�
		printf("a[%d] = %d	", i, a[i]);
		if ((i + 1) % 10 == 0 && i > 0)
			printf("\n"); //10���� �ٹٲ�
		if (a[i] <= min) //�ݺ����� �ݺ��ϸ鼭 �ּڰ��� ã�Ƴ�����
		{
			min = a[i];
			min_index = i;
		}
		if (a[i] >= max) //�ݺ����� �ݺ��ϸ鼭 �ִ��� ã�Ƴ�����
		{
			max = a[i];
			max_index = i;
		}
	}
	printf("\n\n�ּڰ� [%d] = %d\n�ִ� [%d] = %d", min_index, min, max_index, max);
	getch();
	return 0;
}