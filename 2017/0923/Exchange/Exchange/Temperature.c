#include<stdio.h>

int main(void)
{
	double F;
	double C;

	printf("화씨온도: ");
	scanf_s("%lf", &F);


	C = (F - 32) / 1.8;


	printf("\n");
	printf("입력한 화씨온도: %lf도\n", F);
	printf("섭씨온도는 %lf도 입니다.", C);


	getch();

	return 0;
}