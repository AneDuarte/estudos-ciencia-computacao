#include <stdio.h>
#include <stdlib.h>

struct ponto {
	float x;
	float y;
	struct ponto *prox;
};

typedef struct ponto Ponto;
Ponto *listaPontos; //aponta para o inicio da lista
int tamanho = 0;

void adicionarIndex(float x, float y, int index) {
	Ponto *p = (Ponto*) malloc(sizeof(Ponto));
	p -> x = x;
	p -> y = y;

	if(index > tamanho) {
		printf("Posição inválida.");
	} else {
		if(index == 0) {
			//o novo elemento adicionado agora será o primeiro da lista e o antigo primeiro elemento agora será o segundo
			p -> prox = listaPontos; 
			listaPontos = p; 
		} else {
			Ponto *listaAux = listaPontos;
			int i = 0;

			while(i != index - 1) {
				listaAux = listaAux -> prox;
				i++;
			}
			//faço o novo elemento apontar pro mesmo lugar que o antecessor aponta (seu sucessor)
			p -> prox = listaAux -> prox;
			//faço o elemento antecessor agr apontar para o novo elemento
			listaAux -> prox = p;
		}
		tamanho++;
	}
	
}

void imprimir(Ponto *p) {
	if(p != NULL) {
		printf("Ponto(%.1f, %.1f)\n", p -> x, p -> y);
		imprimir(p -> prox);
	}
}

void removerIndex(int index) {
	if(index > tamanho || tamanho == 0) {
		printf("Posição inválida ou lista vazia.\n");
	} else {
		if(index == 0) {
			//se eu apagar o primeiro elemento da lista meu ponteiro vai apontar pro próximo elemento
			listaPontos = listaPontos -> prox;
		} else {
			Ponto *listaAux = listaPontos;
			int i = 0;
			while(i != index - 1) {
				listaAux = listaAux -> prox;
				i++;
			}
			//para fazer o elemento antecessor apontar para o sucessor do elemtno que está sendo removido
			listaAux -> prox = listaAux -> prox -> prox;
		}
		tamanho--;
	}
}

int main() {
	removerIndex(0);

	adicionarIndex(1, 1, 0);
	adicionarIndex(2, 4, 1);
	adicionarIndex(0, 0, 0);

	removerIndex(0);

	//para apagar todos os elementos da lista de uma vez
	/*int i = 0;
	while(i < tamanho) {
		removerIndex(0);
	}*/
	
	Ponto *auxLista = listaPontos;
	imprimir(auxLista);

	return 0;
}

/* Como a lista deveria ficar:
erro
1 1
2 4
*/