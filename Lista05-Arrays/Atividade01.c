#include <stdio.h>

int main() {
	int i, A[20];
	
	printf("Digite 20 numeros inteiros.\n");
	for(i=0; i<20; i++) {
		scanf("%d", &A[i]);
	}
	
	printf("Os numeros digitados que sao pares: \n");
	for(i=0; i<20; i++) {
		if(A[i] % 2 == 0) {
			printf("%d\n", A[i]);	
		}
	}
	
	return 0;
}
