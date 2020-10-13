#include <stdio.h>
#include <stdlib.h>

unsigned int a = 9;
unsigned int b, c;

int print_square(void)
{
	for (b = 1; b <= a; b++)
	{
		for (c = 1; c <= a; c++)
		{
			if ((b == 1) || (b == a) || (c == 1) || (c == a))
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