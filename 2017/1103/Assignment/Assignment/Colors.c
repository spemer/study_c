/*Colors.c*/
#include<stdio.h>
#pragma warning(disable: 4996)
int main(void)
{
	char color; //�Է¹��� ����
	printf("��ȣ���� ���� �Է�: ");
	scanf("%c", &color); //���� �Է�
	if (color == 'r' || color == 'R') {
		printf("����\n"); //r �Ǵ� R �� ���
	}
	else if (color == 'y' || color == 'Y') {
		printf("����\n"); //y �Ǵ� Y �� ���
	}
	else if (color == 'g' || color == 'G') {
		printf("����\n"); //g �Ǵ� G �� ���
	}
	else {
		printf("�Է� ���ڰ� Ʋ�Ƚ��ϴ�\n"); //�� ���� ���
	}
	getch();
	return 0;
}