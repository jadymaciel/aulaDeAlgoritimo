#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include <stdio.h>

int main() {

	double valorOrdenado, valorAumento;

	printf("Digite o valor do seu ordenamneto: ");
	scanf("%f", &valorOrdenado);

	if (valorOrdenado > 1000) {
		valorAumento = valorOrdenado * 0.05;
		valorOrdenado = valorOrdenado + valorAumento;
		
		printf("O ordenamento ficou %f", valorOrdenado);
	}
	else
	{
		valorAumento = valorOrdenado * 0.07;
		valorOrdenado = valorOrdenado + valorAumento;
		printf("O ordenamento ficou %f", valorOrdenado);
	}

}