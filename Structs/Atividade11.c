#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Aluno {
	char nome[50];
	int matricula;
	float mediaF;
	
}aluno[4];

int main() {
	int i, aprovado = 0, reprovado = 0, matricAprovado[4], matricReprovado[4];
	char nomeAprovado[4][50], nomeReprovado[4][50];
	float mediaAprovado[4], mediaReprovado[4]; 
	for(i=0; i<4; i++) {
		printf("Digite o do aluno %d: ", i+1);
		scanf(" %50[^\n]s", aluno[i].nome);
		
		printf("Digite a matricula do aluno %d: ", i+1);
		scanf("%d", &aluno[i].matricula);
		
		printf("Digite a media final do aluno %d: ", i+1);
		scanf("%f", &aluno[i].mediaF);
		printf("\n");
	}
	
	for(i=0; i<4; i++) {
		if(aluno[i].mediaF >= 5) {
			strcpy(nomeAprovado[aprovado], aluno[i].nome);
			matricAprovado[aprovado] = aluno[i].matricula;
			mediaAprovado[aprovado] = aluno[i].mediaF;
			aprovado++;
		} else {
			strcpy(nomeReprovado[reprovado], aluno[i].nome);
			matricReprovado[reprovado] = aluno[i].matricula;
			mediaReprovado[reprovado] = aluno[i].mediaF;
			reprovado++;
		}
	}
	system("cls");
	
	printf("-----Alunos Aprovados-----\n");
	for(i=0; i<aprovado; i++) {
		printf("Nome: %s\n", nomeAprovado[i]);
		printf("Matricula: %d\n", matricAprovado[i]);
		printf("Media final: %.2f\n", mediaAprovado[i]);
		printf("\n");
	}
	
	printf("-----Alunos Reprovados-----\n");
	for(i=0; i<reprovado; i++) {
		printf("Nome: %s\n", nomeReprovado[i]);
		printf("Matricula: %d\n", matricReprovado[i]);
		printf("Media final: %.2f\n", mediaReprovado[i]);
		printf("\n");
	}
	
	return 0;
} 
