#include <stdio.h>

int potencia(int base, int expoente) {
	if(expoente == 1) {
		return base;
	}
	
	return base * potencia(base, expoente - 1);
}

int main() {
	int valor = potencia(2, 4); //16
	printf("O valor da potencia é %d", valor);
	return 0;
}

/* Explicação da recursão

parametros -> potencia(2, 4)

pela condição, se o expoente for diferente de 1 então:
base * potencia(base, expoente - 1) e acontence a tabela abaixo

base	expoente
 2		   4
 2		   3
 2		   2
 2		   1

2 * 2 * 2 * 2 = 16

obs.: outro exemplo de recursão é calcular multiplicação pela soma
*/