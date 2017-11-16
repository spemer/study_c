/*Loop.c*/
#include <stdio.h>
#pragma warning(disable: 4996)
int main()
{
	long fact = 1;
	int i, n;
	printf("정수를 입력하세요: ");
	scanf("%d", &n);
	if (n < 0)
	{//0 이하(음수)를 곱할경우
		printf("Error\n");
	}
	else
	{
		for (i = 1; i <= n; i++)
		{//팩토리얼을 계산하게되는 부분
			fact = fact * i;
		}
		printf("%d!은 %d입니다.\n", n, fact);
	}
	getch();
	return 0;
}