#include <stdio.h>

int main() {
	int i, A[20];
	
	printf("Digite 20 numeros inteiros:\n");
	for(i=0; i<20; i++) {
		scanf("%d", &A[i]);
	}
	
	printf("O array em ordem inversa e:\n");
	for(i=19; i>=0; i--) {
		printf("%d\n", A[i]);
	}
	
	return 0;
 }
