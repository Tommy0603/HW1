#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int A, B;
	printf("�п�J�@�ӼơG\n");
	scanf_s("%d",&A);

	B = A % 2;
	if (B == 0)
	{
		printf("%d �o�ӼƬ�����\n", A);
	}
	else
	{
		printf("%d �o�ӼƬ��_��\n", A);
	}
	system("pause");
	return 0;
}