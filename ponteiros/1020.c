#include <stdio.h>

int main() {
    int idade, anos, meses, dias;
    int *pAnos = &anos;
    int *pMeses = &meses;
    int *pDias = &dias;

    scanf("%d", &idade);

    *pAnos = idade / 365;
    *pMeses = (idade % 365) / 30;
    *pDias = (idade % 365) % 30;

    printf("%d ano(s)\n", *pAnos);
    printf("%d mes(es)\n", *pMeses);
    printf("%d dia(s)\n", *pDias);

    return 0;
}
