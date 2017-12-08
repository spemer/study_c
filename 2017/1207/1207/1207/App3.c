/*App3.c*/
#include <stdio.h>
#pragma warning (disable: 4996)
void sub(int *ptr)
{
	printf("%d\n", ptr[10]);
}
int sum(int *ptr)
{
	int i;
	int sum = 0;
	for (i = 0; i < 20; i++)
		sum = sum + ptr[i];
	return sum;
}
double avr(int *ptr)
{
	double avr = (double)sum(ptr) / 20;
	return avr;
}
int main(void)
{
	int large_data[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
		11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };
	//sub(large_data);
	printf("Sum = %d\n", sum(large_data));
	printf("Avr = %lf\n", avr(large_data));

	getch();
	return 0;
}