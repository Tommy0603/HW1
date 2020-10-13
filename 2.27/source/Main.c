#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b, c;
	printf("    *\n");
	printf("   ***\n");
	printf("  *****\n");
	printf(" *******\n");
	printf("*********\n");

	printf("    *\n   ***\n  *****\n *******\n*********\n");

	for (a = 1; a < 6; a++)
	{
		for (b = 1; b <= 5 - a; b++)
		{
			printf(" ");
		}
		for (c = 0; c < a * 2 - 1; c++)
		{
			printf("*");
		}
		printf("\n");
	}

	system("pause");
	return 0;
}