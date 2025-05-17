#include <stdio.h>

int main()
{
    char O;
	int qtd = 0;
    double soma, numero;

    scanf(" %c", &O);

    soma = 0.0;
    for (int i = 0; i < 12; ++i) {
        for (int j = 0; j < 12; ++j) {
            scanf("%lf", &numero); 

            if (i > j) {
                soma += numero;
				qtd++;
            }
        }
    }

    printf("%.1lf\n", O == 'S' ? soma : soma / qtd);

    return 0;
}