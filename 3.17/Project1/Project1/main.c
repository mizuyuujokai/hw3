#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int acc;//account
	float b;//beginning balance
	float b2;
	float ch;//charges
	float cr;//credits
	float l;//limit
	printf("enter account number(-1 to end):");
	scanf_s("%d", &acc);
	if (acc != -1)
	{
		printf("enter beginning balance:");
		scanf_s("%f", &b);
		printf("enter totle charge:");
		scanf_s("%f", &ch);
		printf("enter totle crdits:");
		scanf_s("%f", &cr);
		printf("enter crdits limit:");
		scanf_s("%f", &l);
		b2 = b + ch - cr;
		printf("account:      %d\n", acc);
		printf("credit limit: %f\n", l);
		printf("balance:      %f\n",b2);
		if (b2 > b)
		{
			printf("crdits limit exceeded\n");
		}
	}


	system("pause");
	return 0;
}