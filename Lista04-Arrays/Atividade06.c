#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"Portuguese");
	int A[10], i, maiorValor = 0, menorValor = 32000;
	
	for(i=0; i<10; i++) {
		printf("Digite um número: ");
		scanf("%d", &A[i]);
		
		if(A[i] > maiorValor) {
			maiorValor = A[i];
		}
		if(A[i] < menorValor) {
			menorValor = A[i];
		}
	}
	
	printf("O maior valor inserido no vetor foi: %d\n", maiorValor);
	printf("O menor valor inserido no vetor foi: %d", menorValor);
	
	return 0;
}
