#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int A, B;
	printf("叫块计\n");
	scanf_s("%d",&A);

	B = A % 2;
	if (B == 0)
	{
		printf("%d 硂计案计\n", A);
	}
	else
	{
		printf("%d 硂计计\n", A);
	}
	system("pause");
	return 0;
}