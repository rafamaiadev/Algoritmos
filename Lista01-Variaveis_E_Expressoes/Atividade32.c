#include <stdio.h>

int main() {
	int n, soma;
	
	printf("Digite um numero: \n");
	scanf("%d", &n);
	
	soma = (3*n+1)+(2*n-1);
	
	printf("A soma dos numeros e: %d", soma);
	
	return 0;
}
