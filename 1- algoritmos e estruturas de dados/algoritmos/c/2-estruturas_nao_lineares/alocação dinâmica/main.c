#include <stdio.h>
#include <stdlib.h>

struct ponto {
	float x;
	float y;
};

typedef struct ponto Ponto;

int main() {
	//malloc serve para alocar dinamicamente um espaço em memória
	//alocada na memória heap
	Ponto *p = malloc(sizeof(Ponto));

	//para acessar os valores das variáveis precisa usar ->
	//estou criando o espaço alocado para guardar as variáveis
	p -> x = 1;
	p -> y = 5;

	printf("Ponto = (%.2f, %.2f)", p -> x, p -> y);
	return 0;
}