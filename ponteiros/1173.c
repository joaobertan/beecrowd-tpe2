#include <stdio.h>

int main() {
	int valor, N[10];
	int *p = N;

	scanf("%d", &valor);
	*p = valor;
	printf("N[0] = %d\n", *p);

	for (int i = 1; i < 10; i++) {
		*(p + i) = *(p + i - 1) * 2;
		printf("N[%d] = %d\n", i, *(p + i));
	}
}
