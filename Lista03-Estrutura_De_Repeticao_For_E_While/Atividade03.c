#include <stdio.h>

int main() {
	int num, i, resultado;
	
	printf("Digite um numero qualquer: \n");
	scanf("%d", &num);
	
	for(i = 1; i <= 10; i++) {
		resultado = num*i;
		
		printf("%dx%d = %d, ", num, i, resultado);
	}
	
	return 0; 
}
