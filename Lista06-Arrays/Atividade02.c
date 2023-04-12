#include <stdio.h>

int main() {
	int i, vetor1[4], vetor2[4], vetor3[4];
	
	printf("Digite 4 valores para o primeiro vetor:\n");
	for(i=0; i<4; i++) {
		scanf("%d", &vetor1[i]);
	}
	
	printf("Digite 4 valores para o segundo vetor:\n");
	for(i=0; i<4; i++) {
		scanf("%d", &vetor2[i]);
	}
	
	printf("A soma de cada elemento dos vetores e:\n");
	for(i=0; i<4; i++) {
		vetor3[i] = vetor1[i]+vetor2[i];
		printf("%d\n", vetor3[i]);
	}
	
	return 0;	
}
