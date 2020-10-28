#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int hr, ch, sa;
	printf("enter # of hours worked:");
	scanf_s("%d", &hr);
	if (hr != -1)
	{
		printf("enter hourly rate of the worker:");
		scanf_s("%d", &ch);
		sa = hr * ch;
		printf("salary is $%d\n", sa);
	}
	system("pause");
	return 0;
}