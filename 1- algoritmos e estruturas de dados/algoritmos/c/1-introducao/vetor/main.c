#include <stdio.h>

int vetor1[4];
float vetor2[3];

int main() {

	//Colocando valores direito no vetor
	vetor1[0] = 5;
	vetor1[1] = 32;
	vetor1[2] = 44;
	vetor1[3] = 7;

	//Recebendo valores para o vetor
	for(int i = 0; i < 3; i++) {
		printf("Digite o %d° valor: \n", i+1);
		scanf("%f", &vetor2[i]);
	}

	printf("--- Valores do segundo vetor ---\n");

	for(int i = 0; i < 3; i++) {
		printf("O valor de vetor2[%d] é %.1f\n", i, vetor2[i]);
	}

	return 0;
}