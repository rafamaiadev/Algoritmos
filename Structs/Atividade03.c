#include <stdio.h>

int main() {
	int i;
	struct ALUNO {
		char nome[25];
		int numMatric;
		char curso[30];
	} aluno[5];
	
	
	for(i=0; i<5; i++) {
		printf("Digite o nome do aluno %d: ", i+1);
		fflush(stdin);
		scanf("%25[^\n]", aluno[i].nome);
		
		printf("Digite a matricula do aluno %d: ", i+1);
		fflush(stdin);
		scanf("%d", &aluno[i].numMatric);
		
		printf("Digite o curso do aluno %d: ", i+1);
		fflush(stdin);
		scanf("%30[^\n]", aluno[i].curso);
	}
	
	system ("cls");
	
	for(i=0; i<5; i++) {
		printf("-------Aluno %d-------\n", i+1);
		
		printf("Nome: %s\n", aluno[i].nome);
		printf("Matricula: %d\n", aluno[i].numMatric);
		printf("Curso: %s\n", aluno[i].curso);
	}
	
	return 0;
}
