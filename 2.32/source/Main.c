#include <stdio.h>
#include <stdlib.h>

float A, B, C;

int main(void)
{
	printf("請輸入身高(cm)：");
	scanf_s("%f",&A);
	printf("請輸入體重(kg)：");
	scanf_s("%f",&B);

	C = B / ((A / 100) * (A / 100));

	if (C < 18.5)
	{
		printf("Your BMI：%.2f Under less\n",C);
	}
	else if ((C >= 18.5) && (C <= 24.9))
	{
		printf("Your BMI：%.2f Normal\n", C);
	}
	else if ((C >= 25) && (C <= 29.9))
	{
		printf("Your BMI：%.2f Overweight\n", C);
	}
	else
	{
		printf("Your BMI：%.2f Obese\n", C);
	}
	system("pause");
	return 0;
}