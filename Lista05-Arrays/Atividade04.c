#include <stdio.h>

int main() {
	int i, A[10], V[10], iguais;
	
	printf("Digite 10 valores para o primeiro vetor: \n");
	for(i=0; i<10; i++) {
		scanf("%d", &A[i]);
	}
	
	printf("Digite 10 valores para o segundo vetor: \n");
	for(i=0; i<10; i++) {
		scanf("%d", &V[i]);
	}
	
	for(i=0; i<10; i++) {
		if(A[i] != V[i]) {
			iguais = 0;
			break;
		} 
	}
	
	if(iguais) {
		printf("Os vetores sao iguais.");
	} else {
		printf("Os vetores sao diferentes");
	}
	
	return 0;
}
