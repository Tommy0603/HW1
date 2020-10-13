#include <stdio.h>
#include <stdlib.h>

unsigned int l, m, n;
unsigned int o, p;

int print_arrow(void)
{
	for (l = 0; l <= 2; l++)
	{
		for (m = 1; m <= 2 - l; m++)
		{
			printf(" ");
		}
		for (n = 0; n <= l * 2; n++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (o = 0; o <= 5; o++)
	{
		for (p = 0; p < 2; p++)
		{
			printf(" ");
		}
		printf("*\n");
	}
	system("pause");
	return 0;
}
