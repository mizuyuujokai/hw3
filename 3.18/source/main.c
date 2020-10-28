#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float s;
	float cr;

	printf("enter sales in dollars:");
	scanf_s("%f",& s);
	if (s != -1)
	{
		cr = 200 + s * 0.09;
		printf("Salary :%1f\n", cr);
	}
	system("pause");
	return 0;
}