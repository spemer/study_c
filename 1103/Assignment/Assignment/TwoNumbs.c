/*TwoNumbs.c*/
#include<stdio.h>
#pragma warning(disable: 4996)
void calc()
{
	int x, y; //�Է¹��� �� ��
	printf("�� ���� �Է����ּ���: ");
	scanf("%d %d", &x, &y); //�� ���� �Է¹���
	printf("%d + %d = %d\n", x, y, x + y);
	if (x >= y)  // x�� y���� ũ�ų� �������
		printf("%d - %d = %d\n", x, y, x - y);
	else if (x < y) // x�� y���� �������
		printf("%d - %d = %d\n", y, x, y - x);
}
int main() //�����
{
	int ask;
	do
	{
		calc();
		printf("\nAgain? No: 0, Yes: 1\n");
		scanf("%d", &ask);
		puts("");
	} while (ask == 1);
	return 0;
}
