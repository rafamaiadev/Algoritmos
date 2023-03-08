#include <stdio.h>

int main() {
	int i, a1, r, n, soma = 0;
	
	printf("Digite o primeiro termo da PA: \n");
	scanf("%d", &a1);
	
	printf("Digite a razao da PA: \n");
	scanf("%d", &r);
	
	printf("Os 10 primeiros elementos da PA sao: \n");
	
	for(i = 0; i<10; i++) {
		
		n = a1+i*r;
		
		soma += n;
		
		printf("%d \n", n);
	}
	printf("A soma dos elementos e: %d", soma); 
	
	return 0;
}
