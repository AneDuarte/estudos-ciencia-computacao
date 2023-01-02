#include <stdio.h>

int fatorial(int valor) {

	if(valor == 1) {
		return valor;
	}

	return valor * fatorial(valor - 1);
}

int main() {
	int resultado = fatorial(4); //24
	printf("\nO valor do fatorial é %d", resultado);
	return 0;
}

/* Passo a passo da recursão
resultado = 4 * fatorial(3)
resultado = 4 * 3 * fatorial(2)
resultado = 4 * 3 * 2 * fatorial(1)
resultado = 4 * 3 * 2 * 1
*/