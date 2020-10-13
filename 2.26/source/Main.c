#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int A, B, C;
	printf("請先輸入大的整數再輸入小的整數：\n");
	scanf_s("%d%d",&A,&B);

	/*if (B > A)
	{
		C = B;
		B = A;
		A = C;
	}*/
	if ((A % B) == 0)
	{
		printf("%d 是 %d 的倍數\n", A, B);
	}
	else
	{
		printf("%d 不是 %d 的倍數\n", A, B);
	}
	system("pause");
	return 0;
}