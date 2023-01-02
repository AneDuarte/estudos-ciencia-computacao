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

void imprimir(Ponto *p) {
	if(p != NULL) {
		printf("Ponto(%.1f, %.1f)\n", p -> x, p -> y);
		imprimir(p -> prox);
	}
}

int main() {
	adicionar(1, 5);
	adicionar(2, 7);
	adicionar(3, 9);

	Ponto *auxLista = listaPontos;
	imprimir(auxLista);
	
	return 0;
}