#include <stdio.h>

#define N_MAX 20

int main() {
	int N[N_MAX], tmp, pos_final;	

	for (int i = 0; i < N_MAX; i++) {
		scanf("%d", &N[i]);
	}

	for (int i = 0; i < N_MAX / 2; i++) {
		pos_final = (N_MAX - 1) - i;
		tmp = N[i];
		N[i] = N[pos_final];
		N[pos_final] = tmp;
	}

	for (int i = 0; i < N_MAX; i++) {
		printf("N[%d] = %d\n", i, N[i]);
	}

	return 0;
}