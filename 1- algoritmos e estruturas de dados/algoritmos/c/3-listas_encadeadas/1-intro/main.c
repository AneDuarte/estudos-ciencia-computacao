#include <stdio.h>
#include <stdlib.h>

struct ponto {
	float x;
	float y;
	struct ponto *prox;
};

typedef struct ponto Ponto;
Ponto *listaPontos;

void adicionar(float x, float y) {
	Ponto *p = malloc(sizeof(Ponto));
	p -> x = x;
	p -> y = y;
	p -> prox = listaPontos;
	listaPontos = p;
}

int main() {
	adicionar(1, 5);
	adicionar(2, 7);
	adicionar(3, 9);

	//imprimir o x do primeiro item da lista (o ultimo a ser adicionado)
	printf("%.0f \n", listaPontos -> x);

	//imprimir o x do antecessor do ultimo adicionado
	printf("%.0f \n", listaPontos -> prox -> x);

	//imprimir o primeiro elemento adicionado
	printf("%.0f \n", listaPontos -> prox -> prox -> x);

	//se eu tentar imprimir o antecessor do primeiro elemento adicionado vai dar falha de segmentação, pois esse ponteiro aponta para um valor nulo]
	printf("%.0f \n", listaPontos -> prox -> prox -> prox -> x);
	return 0;
}