#include <stdio.h>

int main () {
	int lado, area;
	
	printf("Digite um valor para o lado de um quadrado: \n");
	scanf("%d", &lado);
	
	area = lado*lado;
	
	printf("A area do quadrado vale : %d", area);
	
	return 0;
}
