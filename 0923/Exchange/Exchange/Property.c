#include<stdio.h>

int main(void)
{
	int Original;
	int Months = 1;
	int Years;
	int Final;


	printf("�ݾ��� �Է��ϼ���: ");
	scanf_s("%d", &Original);

	Years = Months * 12;
	Final = Original * (30 * Years);


	printf("\n30�� ���� �� �ݾ�: %d��", Final);



	getch();

	return 0;
}