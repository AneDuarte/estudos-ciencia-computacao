#include <stdio.h>

//valores que precisaremos alocar em heap usamos ponteiros.

//usamos os ponteiros para alocar as variáveis de forma dinâmica, em tempo de execução, ou seja, não sabemos a quantidade de informção que precisamos alocar.

int *p;
int valor = 23;

int main() {
	p = &valor;
	
	printf("O valor que o ponteiro aponta é %d", *p);
	
	return 0;
}