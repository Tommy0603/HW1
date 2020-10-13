#include <stdio.h>
#include <stdlib.h>

unsigned int i, j, k;
unsigned int d, e, f;
int print_diamon(void)
{
	for (i = 0; i <= 4; i++)
	{
		for (j = 0; j <= 4 - i; j++)
		{
			printf(" ");
		}
		for (k = 0; k <= i * 2; k++)
		{
			if ((k == 0) || (k == (i * 2)))
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
	for (d = 0; d <= 3; d++)
	{
		printf(" ");
		for (e = 0; e <= d; e++)
		{
			printf(" ");
		}
		for (f = 0; f < 7 - d * 2; f++)
		{
			if ((f == 0) || (f == (6 - d * 2)))
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

