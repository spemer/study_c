/*App1.c*/
#include <stdio.h>
#pragma warning (disable: 4996)
void swap(char *px, char *py)
//*px ���� a�� �ּҰ�, *py���� b�� �ּҰ� ��
{
	char tmp;
	tmp = *px;
	*px = *py;
	*py = tmp;
	//tmp�� ������(int�϶���)
	//*px�� *py�� �ּҰ��� ��
}
int main(void)
{
	char a = 'A', b = 'B';
	printf("swap() ȣ�� �� a = %c, b=%c\n", a, b);
	swap(&a, &b);
	printf("swap() ȣ�� �� a = %c, b=%c\n", a, b);
	getch();
	return 0;
}