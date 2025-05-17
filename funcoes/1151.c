#include <stdio.h>

void exibeSeq(int n) {
	int primeiro, segundo, aux;

	primeiro = 0;
	segundo = 1;

	printf("0");
	if (n == 1) {
		printf("\n"); 
		return;
	}
	printf(" ");
	
	printf("1");
	if (n == 2) {
		printf("\n"); 
		return;
	};

	for (int i = 0; i < n - 2; i++) {
		aux = primeiro + segundo;
		primeiro = segundo;
		segundo = aux;
		printf(" %d", aux);
	}

	printf("\n");
}

int main() {
	int N;

	scanf("%d", &N);

	exibeSeq(N);
}	