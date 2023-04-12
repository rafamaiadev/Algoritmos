#include <stdio.h>

int main () {
	int vetor[6], i, posicao = 0, maiorValor = 0;
	int somaAdjacentes[6] = {0,0,0,0,0,0};
	
	printf("Digite 6 valores para o vetor:\n");
	for(i=0; i<6; i++) {
		scanf("%d", &vetor[i]);
	}
	for(i=0; i<6; i++) {
		if(i == 0) {
		somaAdjacentes[i] = (vetor[i])+(vetor[i+1]);
	} else if (i == 5) {
		somaAdjacentes[i] = (vetor[i-1])+(vetor[i]);
	} else {
		somaAdjacentes[i] = (vetor[i-1])+(vetor[i+1]);
	}
	}
	
	for(i=0; i<6; i++) {
		if(somaAdjacentes[i] > maiorValor) {
			maiorValor = somaAdjacentes[i];
			posicao = i;
		}
	}
	
	printf("O indice da maior soma dos adjacentes e: %d", posicao);
	
	return 0;
	
}
