/*App4.c*/
#include <stdio.h>
#pragma warning (disable: 4996)
int main(void)
{
	char s[100];
	int i;

	printf("단어를 입력해주세요: ");
	gets_s(s, 100);
	int len = strlen(s);
	
	for (i = 0; i <= len; i++)
		printf("%c\n", s[i]);

	getch();
	return 0;
}