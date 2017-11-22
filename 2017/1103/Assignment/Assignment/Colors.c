/*Colors.c*/
#include<stdio.h>
#pragma warning(disable: 4996)
int main(void)
{
	char color; //입력받을 문자
	printf("신호등의 색깔 입력: ");
	scanf("%c", &color); //문자 입력
	if (color == 'r' || color == 'R') {
		printf("정지\n"); //r 또는 R 일 경우
	}
	else if (color == 'y' || color == 'Y') {
		printf("주의\n"); //y 또는 Y 일 경우
	}
	else if (color == 'g' || color == 'G') {
		printf("진행\n"); //g 또는 G 일 경우
	}
	else {
		printf("입력 문자가 틀렸습니다\n"); //그 외의 경우
	}
	getch();
	return 0;
}