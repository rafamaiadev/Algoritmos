#include <stdio.h>

int main() {
	int n, n1, n2, n3, n4;
	
	printf("Digite um numero de 4 digitos: \n");
	scanf("%d", &n);
	
	n1 = (n/1000) % 10;
	n2 = (n/100) % 10;
	n3 = (n/10) % 10;
	n4 = (n % 10);
	
	printf("O digito 1 e: %d \n", n1);
	printf("O digito 2 e: %d \n", n2);
	printf("O digito 3 e: %d \n", n3);
	printf("O digito 4 e: %d \n", n4);
	
	return 0;
}

