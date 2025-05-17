#include <stdio.h>

int getMaiorValor(int valores[]) {
	int maior;

	maior = valores[0];
	for (int i = 1; i < 3; i++) {
		if (valores[i] > maior) {
			maior = valores[i];
		}
	}

	return maior;
}  

int main() {
	int valores[3], maior;

	for (int i = 0; i < 3; i++) {
		scanf("%d", &valores[i]);
	} 

	maior = getMaiorValor(valores);

	printf("%d eh o maior\n", maior);
}