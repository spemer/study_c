#include<stdio.h>

int main(void)
{
	int Original;
	int Months = 1;
	int Years;
	int Final;


	printf("금액을 입력하세요: ");
	scanf_s("%d", &Original);

	Years = Months * 12;
	Final = Original * (30 * Years);


	printf("\n30년 후의 총 금액: %d원", Final);



	getch();

	return 0;
}