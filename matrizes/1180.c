#include <stdio.h>

int main () {
	int N, *X, value, min, pos;

	scanf("%d", &N);
	X = (int *) malloc(N * sizeof(int));

	for (int i = 0; i < N; i++) {
		scanf("%d", &value);
		
		X[i] = value;
	}

	min = X[0];
	pos = 0;
	for (int i = 1; i < N; i++) {
		if (X[i] < min) {
			min = X[i];
			pos = i;
		}
	}

	printf("Menor valor: %d\n", min);
	printf("Posicao: %d\n", pos);

	return 0;
}