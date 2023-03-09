#include <stdio.h>

int main() {
	int i, num, soma = 0;
	
	while(i >= 0 && i <= 7) {
		printf("Digite um numero inteiro:\n");
		scanf("%d", &num);
		soma += num;
		i++;
	}
	
	printf("A soma e: %d", soma);
	
	return 0; 
}
