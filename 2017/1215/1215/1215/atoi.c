/*atoi.c*/
#include<stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)
int main(void)
{
	int i;
	double d;

	i = atoi("100"); // int i �� int������ ��ȯ
	printf("%d \n", i);

	d = atof("36.5"); //double d �� float������ ��ȯ
	printf("%f \n", d);

	getch();
	return 0;
}