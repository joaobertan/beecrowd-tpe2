#include <stdio.h>

int verificaPrimo(int n) {
	int primo;

	primo = 1;
	for (int j = n - 1; j > 1; j--) {
		if (n % j == 0) {
			primo = 0;				
		}
	}

	return primo;
}

int main() {
	int N, X;

	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%d", &X);		
		if (verificaPrimo(X) == 1) {
			printf("%d eh primo\n", X);
		} else {
			printf("%d nao eh primo\n", X);	
		}		
	} 
}