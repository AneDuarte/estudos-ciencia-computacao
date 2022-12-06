#include <stdio.h>

int matriz[2][2];

int main() {

	//Ler os dados e preencher matriz
	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 2; j++) {
			printf("Digite um número: ");
			scanf("%d", &matriz[i][j]);
		}
	}

	//Imprimir os dados da matriz
	printf("-- MATRIZ --\n");
	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 2; j++) {
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}