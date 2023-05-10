#include <stdio.h>
#include <string.h>

int main() {
	int i, aprovado[2] = {-1,-1};
	float media[2], maiorMedia = 0, menorMedia = 10, maiorNota1 = 0;
	char alunoMaiorMedia[25], alunoMenorMedia[25], alunoMaiorNota[25];
	memset(alunoMaiorNota, 0, sizeof(alunoMaiorNota));
	memset(alunoMaiorMedia, 0, sizeof(alunoMaiorMedia));
	memset(alunoMenorMedia, 0, sizeof(alunoMenorMedia));

	
	struct ALUNO {
		char nome[25];
		int numMatric;
		float nota1;
		float nota2;
		float nota3;
	} aluno[2];
	
	for(i=0; i<2; i++) {
		printf("Digite o nome do aluno %d: ", i+1);
		fflush(stdin);
		scanf("%25[^\n]", aluno[i].nome);
		
		printf("Digite a matricula do aluno %d: ", i+1);
		fflush(stdin);
		scanf("%d", &aluno[i].numMatric);
		
		printf("Digite a primeira nota:");
		fflush(stdin);
		scanf("%f", &aluno[i].nota1);
		
		printf("Digite a segunda nota:");
		fflush(stdin);
		scanf("%f", &aluno[i].nota2);
		
		printf("Digite a terceira nota:");
		fflush(stdin);
		scanf("%f", &aluno[i].nota3);
		
		media[i] = (aluno[i].nota1+aluno[i].nota2+aluno[i].nota3)/3;
		
		if(media[i] >= 6) {
			aprovado[i] = 0;
		} else {
			aprovado[i] = 1;
		}
	}
	
	for(i=0; i<2;i++) {
		if(aluno[i].nota1 > maiorNota1) {
			strcpy(alunoMaiorNota, aluno[i].nome);
			maiorNota1 = aluno[i].nota1;
		}
		if(media[i] > maiorMedia) {
			strcpy(alunoMaiorMedia, aluno[i].nome);
			maiorMedia = media[i];
		}
		if(media[i] < menorMedia) {
			strcpy(alunoMenorMedia, aluno[i].nome);
			menorMedia = media[i];
		}
	}

	system ("cls");
	
	printf("O aluno com a maior nota na primera prova e: %s\n", alunoMaiorNota);
	printf("O aluno com a maior media e: %s\n", alunoMaiorMedia);
	printf("O aluno com a menor media e: %s\n", alunoMenorMedia);
	
	for(i=0; i<2; i++) {
		if(aprovado[i] == 0) {
			printf("O aluno %s foi aprovado", aluno[i].nome);
		} else {
			printf("O aluno %s foi reprovado", aluno[i].nome);
		}
		printf("\n");
	}
	
	return 0;
}
