#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float A, B, C, F;
	int D, E;
	printf("�п�J�@��Ѫ��`���{�ơG\n");
	scanf_s("%f", &A);
	printf("�п�J�T�o�@���ɦh�ֿ��G\n");
	scanf_s("%f", &B);
	printf("�п�J�����@���ɯ��p�h�֤����G\n");
	scanf_s("%f", &C);
	printf("�п�J�@�Ѫ������O�G\n");
	scanf_s("%d", &D);
	printf("�п�J�@��Ѫ��L���O�G\n");
	scanf_s("%d", &E);

	F = (A * (B / C)) + D + E;
	printf("�@��Ѫ�O�G%.2f��\n",F);
	system("pause");
	return 0;
}