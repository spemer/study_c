/*Numbers.c*/
#include<stdio.h>
#pragma warning(disable: 4996)
void quiz()
{
	int numb;
	printf("1에서 3 사이의 숫자를 입력하세요: ");
	scanf("%d", &numb);
	while (numb == 1) //유저가 숫자 1을 입력시(1~100 출력)
	{
		printf("1부터 100까지 출력\n");
		while (numb <= 100)
		{
			printf("%d\n", numb);
			++numb; //numb에 1을 더해줌 (반복)
		}
		break;
	}
	while (numb == 2) //유저가 숫자 2를 입력시(짝수만 출력)
	{
		printf("짝수만 출력\n");
		while (numb <= 100)
		{
			if (numb % 2 == 0) //짝수인지 검사
			{
				printf("%d\n", numb);
			}
			++numb; //numb에 1을 더해줌 (반복)
		}
		break;
	}
	while (numb == 3) //유저가 숫자 3을 입력시(5의 배수만 출력)
	{
		printf("5의 배수만 출력\n");
		while (numb <= 100)
		{
			if (numb % 5 == 0) //5의 배수인지 검사
			{
				printf("%d\n", numb);
			}
			++numb; //numb에 1을 더해줌 (반복)
		}
		break;
	}
}
void quiz();
int main()
{
	int ask;
	do
	{
		quiz();
		printf("\nAgain? No: 0, Yes: 1\n");
		scanf("%d", &ask);
		puts("");
	} while (ask == 1);
	return 0;
}