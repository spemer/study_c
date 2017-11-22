/*NumbQuiz.c*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#pragma warning(disable: 4996)
void quiz()
{
	int userNumb;
	int tryNumb = 1; //시도회수 카운트용
	srand((unsigned)time(NULL)); //time과 srand로 매번 다른 난수 생성
	int comNumb = rand() % 100; //rand함수 숫자 100까지
	do
	{
		printf("컴퓨터가 생각한 숫자는? (1~100): ");
		scanf("%d", &userNumb);
		if (userNumb > comNumb) //입력한 숫자가 클 경우
		{
			printf("더 작은 숫자를 입력하세요\n");
			++tryNumb;
		}
		else if (userNumb < comNumb) //입력한 숫자가 작을 경우
		{
			printf("더 큰 숫자를 입력하세요\n");
			++tryNumb;
		}
	} while (userNumb != comNumb); //숫자를 맞추지 못하는동안 계속 반복
	printf("\n정답입니다\n");
	printf("시도 횟수: %d\n", tryNumb);
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