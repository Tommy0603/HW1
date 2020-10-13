#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int N, S, C;
	printf("number\t\tsquare\t\tcube\n");
	for (N = 0; N <= 10; N++)
	{
		S = N * N;
		C = N * S;
		printf("%d\t\t%d\t\t%d\n",N,S,C);
	}
	system("pause");
	return 0;
}