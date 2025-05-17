#include <stdio.h>

#define A_MAX 100

int main () {
	float A[A_MAX];

	for (int i = 0; i < A_MAX; i++) {
		scanf("%f", &A[i]);
	}

	for (int i = 0; i < A_MAX; i++) {
		if (A[i] <= 10) {
			printf("A[%d] = %.1f\n", i, A[i]);
		}
	}

	return 0;
}