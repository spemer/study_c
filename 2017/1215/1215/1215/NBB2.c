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
	STUDENT *p; // ù ��° �迭�� �ּ�

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
		printf("�й�: %d\t�̸�: %s\t����: %0.1f\n", list[i].number, list[i].name, list[i].grade);
	printf("==================================================\n");
	for (i = 0; i < SNUM; i++)
	{
		p = &list[i];
		printf("�й�: %d\t�̸�: %s\t����: %0.1f\n", (*p).number, (*p).name, (*p).grade);
	}
	printf("==================================================\n");
	for (i = 0; i < SNUM; i++)
	{
		p = &list[i];
		printf("�й�: %d\t�̸�: %s\t����: %0.1f\n", p->number, p->name, p->grade);
	}
	printf("==================================================\n");

	getch();
	return 0;
}



/*
printf("�й��� �Է��ϼ���: ");
scanf("%d", &list[0].number);
printf("�й��� �Է��ϼ���: ");
scanf("%s", &list[0].name);
printf("������ �Է��ϼ���: ");
scanf("%f", &list[0].grade);
*/