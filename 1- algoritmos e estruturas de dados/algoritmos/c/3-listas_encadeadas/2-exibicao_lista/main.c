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

void imprimir() {
	Ponto *auxLista = listaPontos;

	while(auxLista != NULL) {
		printf("\n Ponto(%.1f, %.1f)", auxLista -> x, auxLista -> y);
		auxLista = auxLista -> prox;
	}
}

int main() {
	adicionar(1, 5);
	adicionar(2, 7);
	adicionar(3, 9);

	imprimir();
	
	return 0;
}