#include<stdio.h>

void GradeCalc(void);

int main(void)
{
	int Calc;

	do
	{
		GradeCalc();

		printf("\nAgain?\nYes: 1, No: 0 : ");
		scanf_s("%d", &Calc);
		printf("\n-----\n");

	} while (Calc == 1);
	
	return 0;
}

void GradeCalc(void)
{
	char StudentName[100];
	int StudentNumb;
	int Kor;
	int Eng;
	int Math;
	int Total;
	int Aver;
	char Grade;

	printf("Name:");
	scanf_s("%s", StudentName, 100 * sizeof(char));

	printf("Student Number:");
	scanf_s("%d", &StudentNumb);

	printf("Kor:");
	scanf_s("%d", &Kor);
	while (Kor > 100)
	{
		printf("Re-enter Kor: ");
		scanf_s("%d", &Kor);
		if (Kor >= 100)
		{
			break;
		}
	}

	printf("Eng:");
	scanf_s("%d", &Eng);
	while (Eng > 100)
	{
		printf("Re-enter Eng: ");
		scanf_s("%d", &Eng);
		if (Eng >= 100)
		{
			break;
		}
	}

	printf("Math:");
	scanf_s("%d", &Math);
	while (Math > 100)
	{
		printf("Re-enter Math: ");
		scanf_s("%d", &Math);
		if (Math >= 100)
		{
			break;
		}
	}

	Total = Kor + Eng + Math;
	Aver = Total / 3;

	switch (Aver / 10)
	{
	case 10:
	case 9:
		Grade = 'A';
		break;
	case 8:
		Grade = 'B';
		break;
	case 7:
		Grade = 'C';
		break;
	case 6:
		Grade = 'D';
		break;
	default:
		Grade = 'F';
	}

	/*
	if (Aver <= 100 && Aver > 90)
	{
	Grade = 'A';
	}
	else if (Aver < 90 && Aver >= 80)
	{
	Grade = 'B';
	}
	else if (Aver < 80 && Aver >= 70)
	{
	Grade = 'C';
	}
	else if (Aver < 70 && Aver >= 60)
	{
	Grade = 'D';
	}
	else if (Aver < 60)
	{
	Grade = 'F';
	}
	*/

	printf("\n=====\n");
	printf("Name: %s\n", StudentName);
	printf("Average: %d\n", Aver);
	printf("Grade: %c\n", Grade);
	printf("=====\n");
}