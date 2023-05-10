#include <stdio.h>
#include <string.h>

struct Livro {
	char titulo[31];
	char autor[16];
	int ano;
}livro[2];
int i;
void inserirLivros() {
	for(i=0; i<2; i++) {
		printf("Digite o titulo do livro %d: ", i+1);
		scanf(" %31[^\n]", livro[i].titulo);
		
		printf("Digite o autor do livro %d: ", i+1);
		scanf(" %16[^\n]", livro[i].autor);
		
		printf("Digite o ano do livro %d: ", i+1);
		scanf("%d", &livro[i].ano);
		printf("\n");
	}
}

int main() {
	char livroDesejado[31];
	inserirLivros();
	
	printf("Digite o livro desejado:");
	scanf(" %31[^\n]", livroDesejado);
	
	for(i=0; i<2; i++) {
		if(strcmp(livroDesejado, livro[i].titulo) == 0) {
			printf("Livro encontrado !\n");
			printf("Nome: %s\n", livro[i].titulo);
			printf("Autor: %s\n", livro[i].autor);
			printf("Ano: %d", livro[i].ano);
			
			break;
		} 
	}
	if(i == 2) {
			printf("O livro solicitado nao foi encontrado.");
		}
	
	return 0;
}
