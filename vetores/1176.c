#include <stdio.h>

int main () {
	int use_cases, N;
	long long u1, u2, result;
	
	scanf("%d", &use_cases);

	for (int i = 0; i < use_cases; i++) {
		scanf("%d", &N);

		if (N < 0 && N > 60) {
			continue;
		};

		if (N == 0) {
			printf("Fib(0) = 0\n");
			continue;
		};

		if (N == 1) {
			printf("Fib(1) = 1\n");
			continue;
		};

		u1 = 0;
		u2 = 1;
		for (int j = 0; j < N - 1; j++) {
			result = u1 + u2;
			u1 = u2;
			u2 = result;	
		};

		printf("Fib(%d) = %lld\n", N, result);
	}

	return 0;
}