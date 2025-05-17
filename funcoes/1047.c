#include <stdio.h>

#define minutosDia 1440

int getMinutosJogo(int minutosF, int minutosI ) {
	int minutosJogo;

	if (minutosF > minutosI) minutosJogo = minutosF - minutosI;
	else {
		minutosJogo = minutosDia - (minutosI - minutosF);	
	}

	return minutosJogo;
}

int main() {
	int hI, hF, mI, mF, minutosI, minutosF, minutosJogo, horasJogo;

	scanf("%d", &hI);
	scanf("%d", &mI);
	scanf("%d", &hF);
	scanf("%d", &mF);

	minutosI = (hI * 60) + mI;
	minutosF = (hF * 60) + mF;

	minutosJogo = getMinutosJogo(minutosF, minutosI );

	horasJogo = minutosJogo / 60;
	minutosJogo = minutosJogo % 60;

	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horasJogo, minutosJogo);
}