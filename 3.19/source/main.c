#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float pr, r, in;
	int d;
	printf("enter loan principal(-1 to end):");
	scanf_s("%f", &pr);
	if (pr != -1)
	{
		printf("enter interest rate:");
		scanf_s("%f", &r);
		printf("enter term of loan in days:");
		scanf_s("%d", &d);
		in = pr * r * (d/365);
		printf("the interest charge is $%f", in);
	}
	system("pause");
	return 0;
}