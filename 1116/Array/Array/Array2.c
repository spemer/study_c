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
		//�� �迭�� ���� ����
		//a�� 1�� ����, b�� 10�� ����
	}
	for (i = 0; i < SIZE; i++)
	{
		printf("a[%d] = %d,\t", i, a[i]);
		printf("b[%d] = %d,\t", i, b[i]);
		printf("�հ�: %d,\t", a[i] + b[i]);
		printf("���: %0.2f\n\n", ((float)a[i] + (float)b[i]) / 2);
		//����� �Ҽ������� ����ϱ� ���켭 ����ȯ
	}
	getch();
	return 0;
}