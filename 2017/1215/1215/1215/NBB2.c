/*NBB2.c*/
#include<stdio.h>
#pragma warning(disable:4996)
#define SNUM 10
typedef struct student {
	int number;
	char name[50];
	double grade;
} STUDENT;
int main(void)
{
	STUDENT list[SNUM];
	STUDENT *p; // 첫 번째 배열의 주소

	int i;
	for (i = 0; i < SNUM; i++)
	{
		list[i].number = 0;
		strcpy(list[i].name, "");
		list[i].grade = 0.0;
	}

	list[2].number = 201202240;
	strcpy(list[2].name, "Hyouk Seo");
	list[2].grade = 4.5;;

	printf("==================================================\n");
	for (i = 0; i < SNUM; i++)
		printf("학번: %d\t이름: %s\t학점: %0.1f\n", list[i].number, list[i].name, list[i].grade);
	printf("==================================================\n");
	for (i = 0; i < SNUM; i++)
	{
		p = &list[i];
		printf("학번: %d\t이름: %s\t학점: %0.1f\n", (*p).number, (*p).name, (*p).grade);
	}
	printf("==================================================\n");
	for (i = 0; i < SNUM; i++)
	{
		p = &list[i];
		printf("학번: %d\t이름: %s\t학점: %0.1f\n", p->number, p->name, p->grade);
	}
	printf("==================================================\n");

	getch();
	return 0;
}



/*
printf("학번을 입력하세요: ");
scanf("%d", &list[0].number);
printf("학번을 입력하세요: ");
scanf("%s", &list[0].name);
printf("학점을 입력하세요: ");
scanf("%f", &list[0].grade);
*/