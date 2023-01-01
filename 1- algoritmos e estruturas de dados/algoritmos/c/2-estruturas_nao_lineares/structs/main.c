#include <stdio.h>

struct pessoa {
	int idade;
	float altura;
};

// typedef serve para nomear ou renomear um tipo de dado
// estou redfinido o tipo 'struct pessoa' para 'Pessoa'
typedef struct pessoa Pessoa;

int main() {

	Pessoa p;
	p.idade = 21;
	p.altura = 1.63;

	printf("A idade da pessoa é %d e a altura é %.2f", p.idade, p.altura);

	return 0;
}