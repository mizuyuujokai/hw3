#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a;
	float hr,sal,num=0;
	float chr;
	printf("enter employee type: \n(1)Manager \n(2)hourly worker\n(3)commission worker\n(4)picceworker :");
	scanf_s("%d", &a);
	switch (a)
	{
	case 1:
			printf("Salary $6000.00\n");
			break;
	case 2:
			printf("enter work hour:");
			scanf_s("%f",&hr);
			if(hr>40)
			{
				chr = 40 * 160 + (hr - 40) * 160 * 1.5;
				printf("Salary $%f\n", chr);
			}
			else
			{
				chr = hr * 160;
				printf("Salary $%f\n", chr);
			}
			break;
	case 3:			printf("enter weekly sales:");
			scanf_s("%f",&sal);
			chr = 250 + sal * 0.057;
			printf("Salary $%f\n", chr);
			break;
	case 4:
			printf("enter number of item:");
			scanf_s("%f",&num);
			chr = num * 100;
			printf("Salary $%f\n", chr);
			break;

	}
	system("pause");
	return 0;
}