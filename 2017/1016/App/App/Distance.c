/*Distance.c*/
#include <stdio.h>
#include <math.h>
#pragma warning (disable: 4996)
void App(void);
int main(void)
{
	int Try, Count = 1;
	do
	{
		printf("Count: %d\n", Count);
		App();
		printf("Again? Yes: 1, No: 0\n");
		scanf("%d", &Try);
		Count++;
	} while (Try == 1);
	return 0;
}
void App(void)
{
	int x1, y1, x2, y2;
	printf("첫 번째 점 <x1, y1>: ");
	scanf("%d %d", &x1, &y1);
	printf("두 번째 점 <x2, y2>: ");
	scanf("%d %d", &x2, &y2);
	printf("x1 = %d, y1 = %d, x2 = %d, y2 = %d\n", x1, y1, x2, y2); //값 출력
	double Distance = sqrt((pow((x2 - x1), 2)) + (pow((y2 - y1), 2))); //수식
	printf("Distance = %lf\n", Distance);
}