/*Loop.c*/
#include <stdio.h>
#pragma warning(disable: 4996)
int main()
{
	long fact = 1;
	int i, n;
	printf("������ �Է��ϼ���: ");
	scanf("%d", &n);
	if (n < 0)
	{//0 ����(����)�� ���Ұ��
		printf("Error\n");
	}
	else
	{
		for (i = 1; i <= n; i++)
		{//���丮���� ����ϰԵǴ� �κ�
			fact = fact * i;
		}
		printf("%d!�� %d�Դϴ�.\n", n, fact);
	}
	getch();
	return 0;
}