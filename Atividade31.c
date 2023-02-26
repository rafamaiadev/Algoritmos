#include <stdio.h>

int main() {
	int n, n1, n2;
	
	printf("Digite um numero: \n");
	scanf("%d", &n);
	
	n1 = n-1;
	
	printf("Seu antecessor e: %d \n", n1);
	
	n2 = n+1;
	
	printf("Seu sucessor e: %d \n", n2);
	
	return 0;
}
