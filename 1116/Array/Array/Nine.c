/*Nine.c*/
#include <stdio.h>
#pragma warning (disable:4996)
int main(void)
{
	int i, k;
	for (i = 1; i <= 9; i++)
	{//�ݺ��� ����
		for (k = 2; k <= 9; k++)
		{//�������� ��, 2���� ����
			if (k < 9)
			{//�������� ���� 9���� ���� ���
				printf("%d*%d=%d,\t", k, i, i * k);
			}
			else
			{//������(�������� ���� 9), �ٳѱ�
				printf("%d*%d=%d\n", k, i, i * k);
			}
		}
	}
	getch();
	return 0;
}