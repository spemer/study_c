/*NineBirdBody.c*/
#include<stdio.h>
typedef struct student
{
	int number;
	char name[10];
	double grade;
} STUDENT;
int main(void)
{
	STUDENT s1;
	s1.number = 201202240;
	strcpy(s1.name, "Hyouk Seo");
	s1.grade = 4.3;

	STUDENT s2 = { 29942758, "Spemer", 4.5 };

	printf("%d\n%s\n%0.1f\n", s1.number, s1.name, s1.grade);
	printf("\n");
	printf("%d\n%s\n%0.1f\n", s2.number, s2.name, s2.grade);

	getch();
	return 0;
}