#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include <stdio.h>

int main() {
	double valorSalario, valorImposto;
	printef("Insira o seu sal�rio: ");
	sacanf("%f", &valorSalario);

	if (valorSalario < 0) {
		printf("ERRO de sal�rio negatido, tente outra vez");
	}
	else if (valorSalario > 1000)
	{
		valorImposto = valorSalario * 0.1;
		printf("Voc� ter� que para %f imposto", valorImposto);
	}
	else
	{
		valorImposto = valorSalario * 0.05;
		printf("Voc� ter� que para %f imposto", valorImposto);
	}

}