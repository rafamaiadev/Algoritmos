#include <stdio.h>

int main() {
	int i = 0, num = 0, maiorNumero = 0;
	float menorNumero = 10000000000;
	
	while(i < 8) {
		printf("Digite um numero:\n");
		scanf("%d", &num);
		
		if(num > maiorNumero) {
			maiorNumero = num;
		}
		if(num < menorNumero) {
			menorNumero = num;
		}
		
		i++;
	}
	
	printf("O maior numero e: %d\n", maiorNumero);
	
	printf("O menor numero e: %.0f", menorNumero);
	
	return 0;
}
