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
		srand((unsigned)time(NULL)); //time�� srand�� �Ź� �ٸ� ���� ����
		int comNumb = rand() % 3 + 1;
		printf("���ڸ� �Է��ϼ���\n����: 1, ����: 2, ��: 3\n");
		scanf("%d", &userNumb);
		//���ڸ��߱� ���Ӱ��� �ٸ��� ������������ �ݺ���Ű�鼭
		//���ÿ� �Ź� �ٸ� ���� ����ϹǷ� do while�� �ȿ� rand�Լ��� ��ġ��Ŵ
		if (userNumb == comNumb)
		{
			printf("�����ϴ�\n");
		}
		else if (userNumb == 1) //��ǻ�Ͱ� �����ϰ��
		{
			if (comNumb == 2) //������ �����ϰ��
			{
				printf("�̰���ϴ�\n");
			}
			else if (comNumb == 3) //������ ���ϰ��
			{
				printf("�����ϴ�\n");
			}
		}
		else if (userNumb == 2) //��ǻ�Ͱ� �����ϰ��
		{
			if (comNumb == 1) //������ �����ϰ��
			{
				printf("�����ϴ�\n");
			}
			else if (comNumb == 3) //������ ���ϰ��
			{
				printf("�̰���ϴ�\n");
			}
		}
		else if (userNumb == 3) //��ǻ�Ͱ� ���ϰ��
		{
			if (comNumb == 1) //������ �����ϰ��
			{
				printf("�̰���ϴ�\n");
			}
			else if (comNumb == 2) //������ �����ϰ��
			{
				printf("�����ϴ�\n");
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