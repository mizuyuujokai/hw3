#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int i, j,b,l2,l;
	printf("enter breadth:");
	scanf_s("%d", &b);
	printf("enter length:");
	scanf_s("%d", &l);
	for (i = 1; i <= l; i++) 
	{
		for (j = 1; j <= b; j++)
		{
			if (l / 2 != 0)
			{
				l2 = l / 2;
				if (i!=l2+1|| j == 1 || j == b)
					printf("*");
				else
					printf(" ");
			}
			else if(l/2 == 0)
			{
				l2 = l/2;
				if ( i!=l2 || j == 1 || j == b)
					printf("*");
				else
					printf(" ");
			}
		}
		printf("\n");
	}
	system("pause");
	return 0;
}