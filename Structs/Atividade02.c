#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main () {
	struct Endereco {
		char rua[50];
		int numero;
		
	};
	struct Pessoa {
		char nome[16];
		int idade;
		struct Endereco endereco;
	} pessoa;
	
	printf("Digite o nome da pessoa:\n");
	scanf("%s", pessoa.nome);
	
	printf("Digite a idade da pessoa:\n");
	scanf("%d", &pessoa.idade);
	
	printf("Digite a nome da rua da pessoa:\n");
	fflush(stdin);
	scanf("%50[^\n]", &pessoa.endereco.rua);
	
	
	printf("Digite o numero rua da pessoa:\n");
	scanf("%d", &pessoa.endereco.numero);
	
	system("cls");
	
	printf("Nome: %s\n", pessoa.nome);
	printf("Idade: %d\n", pessoa.idade);
	printf("Endereco: %s, %d", pessoa.endereco.rua, pessoa.endereco.numero);
}
