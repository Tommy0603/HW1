#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int A, B, C;
	printf("�Х���J�j����ƦA��J�p����ơG\n");
	scanf_s("%d%d",&A,&B);

	/*if (B > A)
	{
		C = B;
		B = A;
		A = C;
	}*/
	if ((A % B) == 0)
	{
		printf("%d �O %d ������\n", A, B);
	}
	else
	{
		printf("%d ���O %d ������\n", A, B);
	}
	system("pause");
	return 0;
}