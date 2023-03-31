#include <stdio.h>

int main() {
	int i, A[10], soma = 0;
	
	printf("Digite 10 numeros inteiros.\n");
	for(i=0; i<10; i++) {
		scanf("%d", &A[i]);
		soma += A[i];
	}
	
	printf("O valor da soma e: %d", soma);
}
