/*NumbQuiz.c*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#pragma warning(disable: 4996)
void quiz()
{
	int userNumb;
	int tryNumb = 1; //�õ�ȸ�� ī��Ʈ��
	srand((unsigned)time(NULL)); //time�� srand�� �Ź� �ٸ� ���� ����
	int comNumb = rand() % 100; //rand�Լ� ���� 100����
	do
	{
		printf("��ǻ�Ͱ� ������ ���ڴ�? (1~100): ");
		scanf("%d", &userNumb);
		if (userNumb > comNumb) //�Է��� ���ڰ� Ŭ ���
		{
			printf("�� ���� ���ڸ� �Է��ϼ���\n");
			++tryNumb;
		}
		else if (userNumb < comNumb) //�Է��� ���ڰ� ���� ���
		{
			printf("�� ū ���ڸ� �Է��ϼ���\n");
			++tryNumb;
		}
	} while (userNumb != comNumb); //���ڸ� ������ ���ϴµ��� ��� �ݺ�
	printf("\n�����Դϴ�\n");
	printf("�õ� Ƚ��: %d\n", tryNumb);
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