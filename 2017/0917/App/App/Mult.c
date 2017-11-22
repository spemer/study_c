#include<stdio.h>

int main(void)
{
	int SetNumber = 2;
	int First;
	int Answer = 0;


	while (SetNumber <=9)
	{
		printf("Number %d:\n", SetNumber);
		First = 1;
		while (First <= 9)
		{
			Answer = SetNumber * First;
			if (First == 9)
			{
				printf("%d * %d = %d\n", SetNumber, First, Answer);
			}
			else
			{
				printf("%d * %d = %d | ", SetNumber, First, Answer);
			}
			First += 1;
		}
		SetNumber+=1;
		if (SetNumber != 10)
		{
			printf("\n");
		}
		else
		{
			break;
		}
		
	}


	getch();
	return 0;
}