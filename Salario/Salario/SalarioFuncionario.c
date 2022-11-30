#define _CRT_NONSTDC_NO_WARNINGS
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#pragma warning(suppress : 4996)

#include <stdio.h>
#include <conio.h>

float Maior(float x) {
	float y, z;
	y = x * 0.10;
	printf("\n Imposto de: R$ %.2f", y);
	z = x * 0.90;
	return(z);
}

float Menor(float x) {
	float y, z;
	printf("\n Imposto de: R$ %.2f", y);
	z = x * 0.95;
	return (z);
}

int (float) {
	float x, total;
	printf(" Digite aqui o seu salario recebido: ");
	scanf("%f", &x);
	if (x <= 0) {
		printf("\n\tSALARIO NEGATIVO! ");
		getch();
		return(0);
	}
	else if (x > 0 && x < 1000) {
		total = Menor(x);
	}
	else if (x <= 1000) {
		total = Maior(x);
	}
	printf("\n Total - impostos : R$ %.2f ", total);
	getch();
}