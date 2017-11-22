/*TwoNumbs.c*/
#include<stdio.h>
#pragma warning(disable: 4996)
void calc()
{
	int x, y; //입력받을 두 수
	printf("두 수를 입력해주세요: ");
	scanf("%d %d", &x, &y); //두 수를 입력받음
	printf("%d + %d = %d\n", x, y, x + y);
	if (x >= y)  // x가 y보다 크거나 같을경우
		printf("%d - %d = %d\n", x, y, x - y);
	else if (x < y) // x가 y보다 작을경우
		printf("%d - %d = %d\n", y, x, y - x);
}
int main() //재실행
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
