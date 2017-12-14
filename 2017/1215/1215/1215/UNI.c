/*UNI.c*/
#include<stdio.h>
#pragma warning(disable:4996)
typedef union example {
	char c;
	int i;
} EX;

int main(void)
{
	EX data;

	data.c = 'A';
	printf("data.c:%c data.i:%i\n", data.c, data.i);

	data.i = 10000;
	printf("data.c:%c data.i:%i\n", data.c, data.i);

	getch();
}