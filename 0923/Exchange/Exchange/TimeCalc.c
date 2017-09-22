#include<stdio.h>
#define SEC_PER_MINUTE 60

int main(void)
{
	int input, minute, second;
	printf("초단위의 시간을 입력하세요:(32억초이하)\n");
	scanf_s("%d", &input);

	minute = input / SEC_PER_MINUTE;
	second = input % SEC_PER_MINUTE;
	printf("\n%d초는 %d분 %d초입니다. \n",
		input, minute, second);

	getch();

	return 0;
}