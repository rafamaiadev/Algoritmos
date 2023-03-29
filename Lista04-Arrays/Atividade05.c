#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"Portuguese");
	int A[10], i, cont = 0;
	
	for(i=0; i<10; i++) {
		printf("Digite um número: ");
		scanf("%d", &A[i]);
		
		if(A[i] % 2 == 0) {
			cont++;
		}
	}
	
	printf("O vetor possui %d valores pares.", cont);
	
	return 0;
}
