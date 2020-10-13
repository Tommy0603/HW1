#include <stdio.h>
#include <stdlib.h>

unsigned int s, t;

int print_oval(void)
{
	printf("   ***   \n");
	printf(" *     * \n");
	for (s = 1; s <= 5; s++)
	{

		for (t = 1; t <= 9;t++)
		{
			if ((t == 1) || (t == 9))
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
	printf(" *     * \n");
	printf("   ***   \n");

	system("pause");
	return 0;
}