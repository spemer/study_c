#include<stdio.h>
#pragma warning (disable: 4996)
#define PIE 3.141592
int main(void)
{
	double getHalf;
	double circle;
	double length;

	printf("���� �������� �Է��ϼ���: ");
	scanf("%lf", &getHalf);

	circle = (getHalf * getHalf) * PIE;
	length = (2 * PIE) * getHalf;

	printf("���� ����: %.8lf\n", circle);
	printf("���� �ѷ�: %.8lf\n", length);

	getch();
	return 0;
}
