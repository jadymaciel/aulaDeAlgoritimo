#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include <stdio.h>

int main() {
	double kmPercorrido, litrosConsumidos, totalConsumo, totalViagem;

	printf("Digite a quantidade de litros usados: ");
	scanf("%f", &litrosConsumidos);

	printf("Digite a quantidade de quilómetros percorrido: ");
	scanf("%f", &kmPercorrido);

	totalConsumo = (litrosConsumidos / kmPercorrido) * 100;
	totalViagem = litrosConsumidos * 1.82;

	printf("O consumo total foi: ", totalConsumo);
	printf("O total da viagem foi: ", totalViagem);
}