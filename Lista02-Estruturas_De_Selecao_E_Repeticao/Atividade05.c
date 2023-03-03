#include<stdio.h>

int main () {
	int l1, l2, l3;
	
	printf("Digite o primeiro lado do triangulo: \n");
	scanf("%d", &l1);
	
	printf("Digite o segundo lado do triangulo: \n");
	scanf("%d", &l2);
	
	printf("Digite o terceiro lado do triangulo: \n");
	scanf("%d", &l3);
	
	if (l1 == l2 && l2 == l3) {
		
		printf("O triangulo e Equilatero.");
		
	} else if (l1 == l2 && l2 != l3 || l1 == l3 && l3!= l2 || l2 == l3 && l3 != l1) {
		
		printf("O triangulo e Isosceles.");
		
	} else {
		
		printf("O triangulo e Escaleno.");
	}
	
	return 0;
}
