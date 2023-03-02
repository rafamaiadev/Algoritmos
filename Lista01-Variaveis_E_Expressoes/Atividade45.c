#include <stdio.h>

int main() {
	char letraMinuscula, letraMaiuscula;
	
	printf("Digite uma letra desejada: \n");
	scanf("%c", &letraMaiuscula);
	
	letraMinuscula = letraMaiuscula +32;
	
	printf("A letra digitada foi : %c", letraMinuscula);
	
	return 0;
}
