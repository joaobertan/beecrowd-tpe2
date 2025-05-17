#include <stdio.h>

int main() {
	float n1, n2, n3, n4, media, nE;
	float *p1 = &n1, *p2 = &n2, *p3 = &n3, *p4 = &n4, *pMedia = &media, *pNE = &nE;

	scanf("%f", p1);	
	scanf("%f", p2);
	scanf("%f", p3);
	scanf("%f", p4);

	*p1 = (*p1 * 2) / 10;
	*p2 = (*p2 * 3) / 10;
	*p3 = (*p3 * 4) / 10;
	*p4 = (*p4 * 1) / 10;

	*pMedia = *p1 + *p2 + *p3 + *p4;
	printf("Media: %.1f\n", *pMedia);

	if (*pMedia >= 7) {
		printf("Aluno aprovado.\n");
		return 0;
	}

	if (*pMedia < 5) {
		printf("Aluno reprovado.\n");
		return 0;
	}

	printf("Aluno em exame.\n");
	scanf("%f", pNE);

	printf("Nota do exame: %.1f\n", *pNE);
	*pMedia = (*pMedia + *pNE) / 2;
	 
	if (*pMedia >= 5) printf("Aluno aprovado.\n");
	if (*pMedia < 5) printf("Aluno reprovado.\n");

	printf("Media final: %.1f\n", *pMedia);
}
