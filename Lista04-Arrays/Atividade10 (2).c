#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"Portuguese");
	int i, A[15];
	float soma = 0;
	
	for(i=0; i<15; i++) {
		printf("Digite um número para cada nota: ");
		scanf("%d", &A[i]);
		soma += A[i];
	}
	
	printf("A média das notas é: %.2f", soma/15);
	
	return 0; 
}
