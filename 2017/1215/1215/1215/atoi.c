/*atoi.c*/
#include<stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)
int main(void)
{
	int i;
	double d;

	i = atoi("100"); // int i 를 int형으로 변환
	printf("%d \n", i);

	d = atof("36.5"); //double d 를 float형으로 변환
	printf("%f \n", d);

	getch();
	return 0;
}