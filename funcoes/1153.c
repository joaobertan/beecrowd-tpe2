#include <stdio.h>

int getFatorial(int n) {
	int result;

	result = 1;
	for (int i = 1; i <= n; i++) {
		result = result * i;
	}

	return result;
}

int main() {
	int N;

	scanf("%d", &N);

	printf("%d\n", getFatorial(N));
}