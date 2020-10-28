#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i, j;
	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			if (j==4||i==4|| i+j==12 || i+j==4 || i - j == 4 || j - i == 4 )
			{
				printf("*");
			}
			else if((j==5||j==3)  && i>1 && i<7)
			{
				printf("*");
			}
			else if ((j == 2 || j == 6) && i > 2 && i < 6)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	system("pause");
	return 0;
}