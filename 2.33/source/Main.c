#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float A, B, C, F;
	int D, E;
	printf("請輸入一整天的總里程數：\n");
	scanf_s("%f", &A);
	printf("請輸入汽油一公升多少錢：\n");
	scanf_s("%f", &B);
	printf("請輸入平均一公升能行駛多少公里：\n");
	scanf_s("%f", &C);
	printf("請輸入一天的停車費：\n");
	scanf_s("%d", &D);
	printf("請輸入一整天的過路費：\n");
	scanf_s("%d", &E);

	F = (A * (B / C)) + D + E;
	printf("一整天花費：%.2f元\n",F);
	system("pause");
	return 0;
}