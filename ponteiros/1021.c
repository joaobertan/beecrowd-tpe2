#include <stdio.h>

int main() {
	int valor;
	int notas[6] = {10000, 5000, 2000, 1000, 500, 200};
	int moedas[6] = {100, 50, 25, 10, 5, 1};
	int qtd;

	int *pValor = &valor;
	int *pQtd = &qtd;
	int *pNotas = notas;
	int *pMoedas = moedas;

	float entrada;
	scanf("%f", &entrada);
	*pValor = (int)(entrada * 100 + 0.5);  

	printf("NOTAS:\n");
	for(int i = 0; i < 6; i++) {
		*pQtd = *pValor / *(pNotas + i);
		*pValor = *pValor % *(pNotas + i);

		printf("%d nota(s) de R$ %.2f\n", *pQtd, *(pNotas + i) / 100.0);
	}

	printf("MOEDAS:\n");
	for(int i = 0; i < 6; i++) {
		*pQtd = *pValor / *(pMoedas + i);
		*pValor = *pValor % *(pMoedas + i);

		printf("%d moeda(s) de R$ %.2f\n", *pQtd, *(pMoedas + i) / 100.0);
	}
}
