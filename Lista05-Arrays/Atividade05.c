#include <stdio.h>

int main() {
	int A[7],i;
	
	printf("Digite 7 numeros inteiros: \n");
	for(i=0; i<7; i++) {
		scanf("%d", &A[i]);
		
		if(A[i] % 2 == 0) {
			printf("O numero e multiplo de 2.\n");
		} else {
			printf("Nao e multiplo de 2.\n");
		}
		
		if(A[i] % 3 == 0) {
			printf("O numero e multiplo de 3.\n");
		} else {
			printf("Nao e multiplo de 3.\n");
		}
		
		if(A[i] % 6 == 0) {
			printf("O numero e multiplo de 6.\n");
		} else {
			printf("Nao e multiplo de 6.\n");
		}
	}
	
	return 0;
}
