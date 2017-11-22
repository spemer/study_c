/*RSP.c*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#pragma warning(disable: 4996)
void quiz()
{
	int userNumb;
	do
	{
		srand((unsigned)time(NULL)); //time과 srand로 매번 다른 난수 생성
		int comNumb = rand() % 3 + 1;
		printf("숫자를 입력하세요\n가위: 1, 바위: 2, 보: 3\n");
		scanf("%d", &userNumb);
		//숫자맞추기 게임과는 다르게 가위바위보를 반복시키면서
		//동시에 매번 다른 수를 줘야하므로 do while문 안에 rand함수를 위치시킴
		if (userNumb == comNumb)
		{
			printf("비겼습니다\n");
		}
		else if (userNumb == 1) //컴퓨터가 가위일경우
		{
			if (comNumb == 2) //유저가 바위일경우
			{
				printf("이겼습니다\n");
			}
			else if (comNumb == 3) //유저가 보일경우
			{
				printf("졌습니다\n");
			}
		}
		else if (userNumb == 2) //컴퓨터가 바위일경우
		{
			if (comNumb == 1) //유저가 가위일경우
			{
				printf("졌습니다\n");
			}
			else if (comNumb == 3) //유저가 보일경우
			{
				printf("이겼습니다\n");
			}
		}
		else if (userNumb == 3) //컴퓨터가 보일경우
		{
			if (comNumb == 1) //유저가 가위일경우
			{
				printf("이겼습니다\n");
			}
			else if (comNumb == 2) //유저가 바위일경우
			{
				printf("졌습니다\n");
			}
		}
	} while (userNumb != 4);
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