#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int A, B, C, D;
	printf("�п�J�T�ӼơG\n");
	scanf_s("%d%d%d", &A, &B, &C);

	if (A > B)
	{
		D = A;
		A = B;
		B = D;
	}
	if (B > C)
	{
		D = B;
		B = C;
		C = D;
	}
	if(A > B)
	{
		D = A;
		A = B;
		B = A;
	}
	printf("The largetest integer is�G%d\n",C);
	printf("The smallest integer is�G%d\n",A);

	system("pause");
	return 0;
}