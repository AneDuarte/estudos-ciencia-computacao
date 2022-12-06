#include <stdio.h>

int soma(int num1, int num2) {
	return num1 + num2;
}

int subtracao(int num1, int num2) {
	return num1 - num2;
}

int main(void) {
	int operacao, num1, num2, resultado;
	char repeticao = 's';

	while(repeticao == 's'){
		printf("Digite a operação desejada:\n1-Adição\n2-Subtração\n");
		scanf("%d", &operacao);
	
		printf("Digite o primeiro número: ");
		scanf("%d", &num1);
	
		printf("Digite o segundo número: ");
		scanf("%d", &num2);
	
		if(operacao == 1) {
			resultado = soma(num1, num2);
		}
	
		if(operacao == 2) {
			resultado = subtracao(num1, num2);
		}
	
		printf("O resultado da operação é %d", resultado);
		printf("\nDeseja fazer outra operação?(s/n): ");
		scanf(" %c", &repeticao);
	}

	return 0;
}