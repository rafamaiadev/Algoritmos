#include <stdio.h>

int main() {
	int i, A[20], temporario;
	
	printf("Digite 20 numeros inteiros:\n");
	for(i=0; i<20; i++) {
		scanf("%d", &A[i]);
	}
	for(i=0; i<10; i++) {
		temporario = A[i];
		A[i] = A[19-i];
		A[19-i] = temporario;
	}
	printf("O array em ordem inversa e:\n");
	for(i=0; i<20; i++) {
		printf("%d\n", A[i]);
	}
	
	return 0;
 }
