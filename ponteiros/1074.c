#include <stdio.h>

int main() {
	int N, X;
	int *pN = &N, *pX = &X;

	scanf("%d", pN);

	for(int i = 0; i < *pN; i++) {
		scanf("%d", pX);

		if (*pX == 0) {
			printf("NULL\n");
			continue;
		}

		if (*pX % 2 == 0) printf("EVEN ");
		else printf("ODD ");

		if (*pX > 0) printf("POSITIVE\n");
		else printf("NEGATIVE\n");
	}
}
