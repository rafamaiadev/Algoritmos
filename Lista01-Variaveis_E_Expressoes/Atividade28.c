#include <stdio.h>

int main(){
	int n1, n2, n3, resultado;
	
	printf("Digite um numero: \n");
	scanf("%d", &n1);
	
	printf("Digite outro numero: \n");
	scanf("%d", &n2);
	
	printf("Digite o ultimo numero: \n");
	scanf("%d", &n3);
	
	resultado = (n1*n1)+(n2*n2)+(n3*n3);
	
	printf("O resultado e igual a: %d", resultado);
	
	return 0;
}
