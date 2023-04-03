#include <stdio.h>

int main() {
	int i, A[4], B[4], produtoEscalar = 0;
	
	printf("Digite 4 valores pro vetor A:\n");
	for(i=0; i<4; i++) {
		scanf("%d", &A[i]);
	}
	
	printf("Digite 4 valores pro vetor B:\n");
	for(i=0; i<4; i++) {
		scanf("%d", &B[i]);
	}
	
	for(i=0; i<4; i++) {
		produtoEscalar += A[i]*B[i];
	}
	
	printf("O produto escalar dos vetores e: %d", produtoEscalar);
	
	return 0;
}
