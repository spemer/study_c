/*Numbers.c*/
#include<stdio.h>
#pragma warning(disable: 4996)
void quiz()
{
	int numb;
	printf("1���� 3 ������ ���ڸ� �Է��ϼ���: ");
	scanf("%d", &numb);
	while (numb == 1) //������ ���� 1�� �Է½�(1~100 ���)
	{
		printf("1���� 100���� ���\n");
		while (numb <= 100)
		{
			printf("%d\n", numb);
			++numb; //numb�� 1�� ������ (�ݺ�)
		}
		break;
	}
	while (numb == 2) //������ ���� 2�� �Է½�(¦���� ���)
	{
		printf("¦���� ���\n");
		while (numb <= 100)
		{
			if (numb % 2 == 0) //¦������ �˻�
			{
				printf("%d\n", numb);
			}
			++numb; //numb�� 1�� ������ (�ݺ�)
		}
		break;
	}
	while (numb == 3) //������ ���� 3�� �Է½�(5�� ����� ���)
	{
		printf("5�� ����� ���\n");
		while (numb <= 100)
		{
			if (numb % 5 == 0) //5�� ������� �˻�
			{
				printf("%d\n", numb);
			}
			++numb; //numb�� 1�� ������ (�ݺ�)
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