#include <stdio.h>

int multiplicacao(int valor1, int valor2) {
	if(valor2 == 1) {
		return valor1;
	}

	return valor1 + multiplicacao(valor1, valor2 - 1);
}

int main() {
	int resultado = multiplicacao(3, 5);
	printf("\nO valor da multiplicação é %d", resultado);
	return 0;
}
