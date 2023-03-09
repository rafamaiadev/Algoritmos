#include <stdio.h>

int main() {
	int idade = 0, alunos = 0;
	float media = 0;
	
	while(idade != 999) {
		printf("Digite uma idade ou tecle(999) para encerrar::\n");
		scanf("%d", &idade);
		
		if(idade != 999) {
			media += idade;
			alunos++;
		}
	}
	
	printf("Existem %d alunos na turma.\n", alunos);
	
	printf("A media de idade da turma e: %.2f", media/alunos);
	
	return 0;
}
