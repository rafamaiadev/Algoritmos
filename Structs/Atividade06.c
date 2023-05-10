#include <stdio.h>

int main () {
	int i;
	float media[5];
	
	struct ALUNO {
		char nome[25];
		int numMatric;
		int codigo;
		float nota1;
		float nota2;
	} aluno[5];
	
	for(i=0; i<5; i++) {
		printf("Digite o nome do aluno %d: ", i+1);
		fflush(stdin);
		scanf("%25[^\n]", aluno[i].nome);
		
		printf("Digite a matricula do aluno %d: ", i+1);
		fflush(stdin);
		scanf("%d", &aluno[i].numMatric);
		
		printf("Digite o codigo da disciplina:");
		fflush(stdin);
		scanf("%f", &aluno[i].codigo);
		
		printf("Digite a primeira nota:");
		fflush(stdin);
		scanf("%f", &aluno[i].nota1);
		
		printf("Digite a segunda nota:");
		fflush(stdin);
		scanf("%f", &aluno[i].nota2);
		
		media[i] = (aluno[i].nota1 + (2*aluno[i].nota2))/3;
	}
	
	system("cls");
	
	for (i=0; i<5; i++) {
		printf("O aluno %s teve media igual a: %.2f", aluno[i].nome, media[i]);
		printf("\n");
	}
}
