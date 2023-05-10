#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

char naipe[][10] = {"Ouros", "Copas", "Paus", "Espadas"};

struct Carta {
	char naipe[10];
	int valor;
}jogador1[5], jogador2[5];

int main() {
	
	int i;
	srand(time(NULL));
	
	for(i=0; i<5; i++) {
		jogador1[i].valor = (rand() % 13) +1;
		strcpy(jogador1[i].naipe, naipe[rand() % 4]);
	}	
	
	for(i=0; i<5; i++) {
		jogador2[i].valor = (rand() % 13) +1;
		strcpy(jogador2[i].naipe, naipe[rand() % 4]);
 
	}
	
	printf("O jogador 1 recebeu as cartas:\n");
	for(i=0; i<5; i++) {
		printf("---Carta %d---\n", i+1);
		printf("%d de %s", jogador1[i].valor, jogador1[i].naipe);
		printf("\n");
	}
	printf("O jogador 2 recebeu as cartas:\n");
	for(i=0; i<5; i++) {
		printf("---Carta %d---\n", i+1);
		printf("%d de %s", jogador2[i].valor, jogador2[i].naipe);
		printf("\n");
	}
	
	return 0;
}
