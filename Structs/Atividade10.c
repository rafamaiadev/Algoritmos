#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
 struct Pessoa {
 	char nome[50];
 	char endereco[50];
 	int telefone;
 	 
 }pessoa[4];
 
 int comparacao(const void *p1, const void *p2) {
    const struct Pessoa *a = (const struct Pessoa*)p1;
    const struct Pessoa *b = (const struct Pessoa*)p2;
    return strcmp(a->nome, b->nome);
}
 
 int main() {
 	int i;
 	
 	for(i=0; i<4; i++) {
 		printf("Digite o nome do usuario %d: ", i+1);
 		scanf(" %50[^\n]", pessoa[i].nome);
 		
 		printf("Digite o endereco do usuario %d: ", i+1);
 		scanf(" %50[^\n]", pessoa[i].endereco);
 		
 		printf("Digite o telefone do usuario %d: ", i+1);
 		scanf("%d", &pessoa[i].telefone);
	 }
	 
	 qsort(pessoa, 4, sizeof(struct Pessoa), comparacao);
	 
	 system("cls");
	 
	 for(i=0; i<4; i++) {
	 	printf("------PESSOA %d------\n", i+1);
	 	printf("Nome: %s\n", pessoa[i].nome);
        printf("Endereco: %s\n", pessoa[i].endereco);
        printf("Telefone: %d\n", pessoa[i].telefone);
        printf("\n");
	 }
	 
	 return 0;
 }
