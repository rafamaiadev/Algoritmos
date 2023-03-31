#include <stdio.h>

int main() {
	int i, A[4], B[4], C[4] = {0}, soma = 0;
	
	printf("Digite 4 valores para o vetor A:\n");
	for(i=0; i<4; i++) {
		scanf("%d", &A[i]);
	}
	
	printf("Digite 4 valores para o vetor B:\n");
	for(i=0; i<4; i++) {
		scanf("%d", &B[i]);
	}
	
	for(i=0; i<4; i++) {
		C[i]+= A[i]+B[i];
		soma+=C[i];
	}
	
	printf("A soma dos elementos e: \n");
	for(i=0; i<4; i++) {
		if(i == 3) {
			printf("%d = %d",C[i], soma);
			break;
		}
		printf("%d + ", C[i]);
		
	}
	
	return 0;
}
