#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"Portuguese");
	int A[10], i, menorValor, maiorValor;
	
	printf("Digite 10 números: \n");
	for(i=0; i<10; i++) {
		scanf("%d", &A[i]);
	}
	
	menorValor = A[0];
	maiorValor = A[0];
	
	printf("Os elementos do vetor são: \n");
	for(i=0; i<10; i++) {
		if(A[i] > maiorValor) {
			maiorValor = A[i];
		}
		if(A[i] < menorValor) {
			menorValor = A[i];
		}
		printf("%d\n", A[i]);
	}
	
	printf("O maior valor inserido foi: %d\n", maiorValor);
	printf("O menor valor inserido foi: %d\n", menorValor);
	
	return 0;
}
