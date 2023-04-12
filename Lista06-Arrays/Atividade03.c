#include <stdio.h>

int main () {
	int vetor[4], i, posicao = 0, maiorValor = 0;
	
	printf("Digite 4 valores para o vetor:\n");
	for(i=0; i<4; i++) {
		scanf("%d", &vetor[i]);
	}
	for(i=0; i<4; i++) {
		if(i == 0) {
		vetor[i] = vetor[i+1];
	} else if (i == 3) {
		vetor[i] = vetor[i-1];
	} else {
		vetor[i] = (vetor[i-1])+(vetor[i+1]);
	}
	}
	
	for(i=0; i<4; i++) {
		if(vetor[i] > maiorValor) {
			maiorValor = vetor[i];
			posicao = i;
		}
	}
	
	printf("O indice do maior valor e: %d", posicao);
	
	return 0;
	
}
