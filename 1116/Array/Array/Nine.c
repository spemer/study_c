/*Nine.c*/
#include <stdio.h>
#pragma warning (disable:4996)
int main(void)
{
	int i, k;
	for (i = 1; i <= 9; i++)
	{//반복문 시작
		for (k = 2; k <= 9; k++)
		{//곱해지는 수, 2부터 시작
			if (k < 9)
			{//곱해지는 수가 9보다 작을 경우
				printf("%d*%d=%d,\t", k, i, i * k);
			}
			else
			{//나머지(곱해지는 수가 9), 줄넘김
				printf("%d*%d=%d\n", k, i, i * k);
			}
		}
	}
	getch();
	return 0;
}