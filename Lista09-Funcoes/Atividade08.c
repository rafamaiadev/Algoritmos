#include <stdio.h>
#include <stdlib.h>

#define MAX_EQUIPE 4

struct Equipe {
	char nome[50];
	int numJogos;
	int numVitorias;
	int numEmpates;
	int numDerrotas;
	int pontosGanhos;
	int golsAFavor;
	int golsContra;
	int saldoGols;
};

void inserirEquipes(struct Equipe equipe[], int *numEquipes);

int ordenarEquipes(const void *a, const void *b);

int main() {
	int i;
	struct Equipe equipe[MAX_EQUIPE];
	int numEquipes = 0;
	
	inserirEquipes(equipe, &numEquipes);
	
	system("cls");
	
	qsort(equipe, MAX_EQUIPE, sizeof(struct Equipe), ordenarEquipes);
	
    for (i=0; i < numEquipes; i++) {
        printf("Equipe: %s\n Numero de jogos: %d\n Numero de vitorias: %d\n Numero de empates: %d\n Numero de derrotas: %d\n Pontos ganhos: %d\n Gols a favor: %d\n Gols contra: %d\n Saldo de gols: %d\n"
		,equipe[i].nome, equipe[i].numJogos, equipe[i].numVitorias,
            equipe[i].numEmpates, equipe[i].numDerrotas, equipe[i].pontosGanhos, equipe[i].golsAFavor, equipe[i].golsContra,
            equipe[i].saldoGols);
    }
    
    return 0;
}

void inserirEquipes(struct Equipe equipe[], int *numEquipes) {
	int pontosVitorias = 0, pontosEmpates = 0, i;
	for(i= *numEquipes; i<MAX_EQUIPE; i++) {
		printf("Digite o nome da equipe %d: ", i+1);
		scanf(" %50[^\n]", equipe[i].nome);
		
		printf("Digite o numero de jogos da equipe %d: ", i+1);
		scanf("%d", &equipe[i].numJogos);
		
		printf("Digite o numero de vitorias da equipe %d: ", i+1);
		scanf("%d", &equipe[i].numVitorias);
		pontosVitorias = (equipe[i].numVitorias)*3;
		
		printf("Digite o numero de empates da equipe %d: ", i+1);
		scanf("%d", &equipe[i].numEmpates);
		pontosEmpates = equipe[i].numEmpates*1;
		
		printf("Digite o numero de derrotas da equipe %d: ", i+1);
		scanf("%d", &equipe[i].numDerrotas);
		
		equipe[i].pontosGanhos = pontosVitorias+pontosEmpates;
		
		printf("Digite o numero de gols favoraveis da equipe %d: ", i+1);
		scanf("%d", &equipe[i].golsAFavor);
		
		printf("Digite o numero de gols contra da equipe %d: ", i+1);
		scanf("%d", &equipe[i].golsContra);
		
		equipe[i].saldoGols = equipe[i].golsAFavor - equipe[i].golsContra;
		
		(*numEquipes)++;
	}
}
	int ordenarEquipes(const void *a, const void *b) {
    const struct Equipe *equipe1 = (const struct Equipe *)a;
    const struct Equipe *equipe2 = (const struct Equipe *)b;
    
     if (equipe1->pontosGanhos != equipe2->pontosGanhos) {
        return equipe2->pontosGanhos - equipe1->pontosGanhos;
    }
    
	if (equipe1->numVitorias != equipe2->numVitorias) {
        return equipe2->numVitorias - equipe1->numVitorias;
    }	 
}
