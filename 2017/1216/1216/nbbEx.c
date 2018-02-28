/*nbbEx.c*/
#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable: 4996)
#define MAX 10
typedef struct student {
	int number;
	char name[50];
	double grade;
} STUDENT;
int main(void)
{
	STUDENT list[MAX];
	int i;
	int userNumber = 0;
	for (i = 0; i < MAX; i++)
	{
		list[i].number = 0;
		strcpy(list[i].name, "");
		list[i].grade = 0.0;
	}
	printf("Type your number: ");
	scanf_s("&d", userNumber);

	printf("%d's Student Number: ", userNumber);
	scanf("&d", list[userNumber].number);
	printf("%d's Name: ", userNumber);
	scanf("&s", list[userNumber].name);
	printf("%d's Grade: ", userNumber);
	scanf("&f", list[userNumber].grade);

	printf("Number: %d\nName: %s\nGrade: %0.1f\n", list[userNumber].number, list[userNumber].name, list[userNumber].grade);

	getch();
	return 0;
}