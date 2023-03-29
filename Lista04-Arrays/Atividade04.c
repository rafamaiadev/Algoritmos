#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"Portuguese");
	int i, A[8], X, Y, soma;
	
	for(i=0; i<8; i++) {
		printf("Digite um numero: ");
		scanf("%d", &A[i]);
	}
	
	printf("Digite um valor para X entre 0 e 7: ");
	scanf("%d", &X);
	
	printf("Digite um valor para Y entre 0 e 7: ");
	scanf("%d", &Y);
	
	soma = A[X] + A[Y];
	
	printf("O valor da soma das posições de X e Y é: %d", soma);
	
	return 0;
}
