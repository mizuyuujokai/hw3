#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float rate, money=5000;
	int i;
	printf("enter rate( 0.1~0.12)");
	scanf_s("%f", &rate);
	printf("$5000,for 15 year,rate %f\n",rate);

	for (i = 0; i < 15; i++)
	{
		money = money *(1+ rate);
		printf("%d year $%f\n", i+1, money);
	}

	system("pause");
	return 0;

}