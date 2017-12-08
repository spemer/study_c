/*App2.c*/
#include <stdio.h>
#pragma warning (disable: 4996)
int main(void)
{
	int a[] = { 10, 20, 30, 40, 50 };
	int *p;
	int i;

	p = a;
	printf("a[0]=%d a[1]=%d a[2]=%d \n", a[0], a[1], a[2]);
	printf("p[0]=%d p[1]=%d p[2]=%d \n\n", p[0], p[1], p[2]);

	for (i = 0; i < 5; i++)
		printf("%d ", a[i]);
	printf("\n\n");

	for (i = 0; i < 5; i++)
		printf("%d ", *p++);
	printf("\n\n");

	p = a;
	for (i = 0; i < 5; i++)
		printf("%d ", p[i]);
	printf("\n\n");

	//printf("배열의 이름 = %u\n", a);
	//printf("첫 번째 원소의 주소 = %u\n", &a[1]);
	////배열의 index를 1씩 증가시켜 출력하면
	////int의 크기(4)만큼 주소값이 증가

	getch();
	return 0;
}