#include<stdio.h>
#define SEC_PER_MINUTE 60

int main(void)
{
	int input, minute, second;
	printf("�ʴ����� �ð��� �Է��ϼ���:(32��������)\n");
	scanf_s("%d", &input);

	minute = input / SEC_PER_MINUTE;
	second = input % SEC_PER_MINUTE;
	printf("\n%d�ʴ� %d�� %d���Դϴ�. \n",
		input, minute, second);

	getch();

	return 0;
}