#include <stdio.h>
#include <stdlib.h>

struct ponto {
	float x;
	float y;
	struct ponto *prox;
};

typedef struct ponto Ponto;
Ponto *listaPontos; //aponta para o inicio da lista

void adicionarInicio(float x, float y) {
	Ponto *p = malloc(sizeof(Ponto));
	p -> x = x;
	p -> y = y;
	p -> prox = listaPontos;
	listaPontos = p;
}

void adicionarFim(float x, float y) {
	Ponto *p = (Ponto*) malloc(sizeof(Ponto));
	p -> x = x;
	p -> y = y;
	p -> prox = NULL;

	if(listaPontos == NULL) {
		listaPontos = p;
	} else {
		Ponto *listaAux = listaPontos;

		while(listaAux -> prox != NULL) {
			listaAux = listaAux -> prox;
		}

		listaAux -> prox = p;
	}
}

void imprimir(Ponto *p) {
	if(p != NULL) {
		printf("Ponto(%.1f, %.1f)\n", p -> x, p -> y);
		imprimir(p -> prox);
	}
}

int main() {
	printf("Adicionar elementos no início da lista: \n");
	adicionarInicio(1, 5);
	adicionarInicio(2, 7);
	adicionarInicio(3, 9);

	printf("Adicionar elementos no fim da lista: \n");
	adicionarFim(2, 4);
	adicionarFim(1, 7);
	adicionarFim(8, 3);

	Ponto *auxLista = listaPontos;
	imprimir(auxLista);
	
	return 0;
}

/* Como a lista deveria ficar:
3 9
2 7
1 5
2 4
1 7
8 3
*/