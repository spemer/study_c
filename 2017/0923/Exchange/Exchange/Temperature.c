#include<stdio.h>

int main(void)
{
	double F;
	double C;

	printf("ȭ���µ�: ");
	scanf_s("%lf", &F);


	C = (F - 32) / 1.8;


	printf("\n");
	printf("�Է��� ȭ���µ�: %lf��\n", F);
	printf("�����µ��� %lf�� �Դϴ�.", C);


	getch();

	return 0;
}