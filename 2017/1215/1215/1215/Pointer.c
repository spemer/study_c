/*Pointer.c*/
#include <stdio.h>
int main(void)
{
	char s[] = "HelloWorld";
	char *p = "HelloWorld";
	s[0] = 'h';		// ���� �����ϴ�.
					// p[0] = 'h';		// �� ������ �����ϸ� ���α׷��� �۵��� �����ȴ�.

	printf("�����Ͱ� ����Ű�� ���ڿ� = %s \n", p);
	p = "Goodbye";  // �̰��� �����ϴ�. ū �����̴�.
	printf("�����Ͱ� ����Ű�� ���ڿ� = %s \n", p);

	getch();
	return 0;
}

/*
char s[] = "HelloWorld";	// ������ ���׸�Ʈ (���� ������ �� ����)
char *p  = "HelloWorld";	// �ؽ�Ʈ ���׸�Ʈ (���� ������ �� ����)
*/