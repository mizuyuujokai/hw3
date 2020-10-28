#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i, j, k;
	for (i = 1; i <500 ; i++) 
	{
		for (j = 1; j <= 354; j++)
		{
			for (k = 1; k <= 354; k++)
			{
				if ((k * k) + (j * j) == (i * i))
					printf("side1 %d,side2 %d\n", j, k);
			}
		}
	}
	system("pause");
	return 0;
}