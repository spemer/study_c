/*Char.c*/
#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)
int main(void)
{
	char a[80] = "100 + 36.5";
	char b[80];
	char c[80];
	int i;
	double d;
	double result;

	b[0] = a[0];
	b[1] = a[1];
	b[2] = a[2];
	b[3] = '\0';

	c[0] = a[6];
	c[1] = a[7];
	c[2] = a[8];
	c[3] = a[9];
	c[4] = '\0';

	i = atoi(b);
	d = atof(c);

	printf("%0.2f", i / d);

	getch();
	return 0;
}