/*App1.c*/
#include <stdio.h>
#pragma warning (disable: 4996)
void swap(char *px, char *py)
//*px 에는 a의 주소가, *py에는 b의 주소가 들어감
{
	char tmp;
	tmp = *px;
	*px = *py;
	*py = tmp;
	//tmp는 정수값(int일때는)
	//*px와 *py는 주소값이 들어감
}
int main(void)
{
	char a = 'A', b = 'B';
	printf("swap() 호출 전 a = %c, b=%c\n", a, b);
	swap(&a, &b);
	printf("swap() 호출 후 a = %c, b=%c\n", a, b);
	getch();
	return 0;
}