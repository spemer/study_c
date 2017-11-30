/*Main.c*/
#include<stdio.h>
#include"FtoC_CtoF.h"
#pragma warning(disable: 4996)
void calc()
{
	double numb;
	char input;
	printf("Input number and C or F: ");
	scanf("%lf %c", &numb, &input);
	switch (input)
	{
	case 'f': case 'F':
		printf("Fahrenheit temperature %0.2lf corresponds to %0.2lf degrees Celsius. \n", numb, FtoC(numb));
		break;
	case 'c': case 'C':
		printf("%0.2lf degrees Celsius corresponds to %0.2lf degrees Fahrenheit. \n", numb, CtoF(numb));
		break;
	}
}
int main(void)
{
	int ask;
	do
	{
		calc();
		printf("\nCalculate again? No: 0, Yes: 1\n");
		scanf("%d", &ask);
	} while (ask == 1);
	return 0;
}