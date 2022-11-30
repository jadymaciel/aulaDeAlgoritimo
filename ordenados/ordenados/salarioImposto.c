#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include <stdio.h>

int main() {
	double valorSalario, valorImposto;
	printef("Insira o seu salário: ");
	sacanf("%f", &valorSalario);

	if (valorSalario < 0) {
		printf("ERRO de salário negatido, tente outra vez");
	}
	else if (valorSalario > 1000)
	{
		valorImposto = valorSalario * 0.1;
		printf("Você terá que para %f imposto", valorImposto);
	}
	else
	{
		valorImposto = valorSalario * 0.05;
		printf("Você terá que para %f imposto", valorImposto);
	}

}