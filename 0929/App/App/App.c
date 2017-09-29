#include<stdio.h>
#pragma warning (disable: 4996)
#define PIE 3.141592
int main(void)
{
	double getHalf;
	double circle;
	double length;

	printf("원의 반지름을 입력하세요: ");
	scanf("%lf", &getHalf);

	circle = (getHalf * getHalf) * PIE;
	length = (2 * PIE) * getHalf;

	printf("원의 면적: %.8lf\n", circle);
	printf("원의 둘레: %.8lf\n", length);

	getch();
	return 0;
}
