#include <stdio.h>

int main () {
	int N[1000], T, aux;
	aux = 0;

	scanf("%d", &T);
	if (T > 50 && T < 2) {
		return 0;
	}

	for (int i = 0; i < 1000; i++) {
		if (aux == T) aux = 0;

		N[i] = aux;
		aux++;

		printf("N[%d] = %d\n", i, N[i]);
	}

	return 0;
}