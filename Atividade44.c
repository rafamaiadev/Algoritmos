#include <stdio.h>

int main() {
	float alturaDegrau, alturaDesejada, degrausNecessarios;
	
	printf("Digite um valor para a altura do degrau: \n");
	scanf("%f", &alturaDegrau);
	
	printf("Digite um valor para a altura desejada: \n");
	scanf("%f", &alturaDesejada);
	
	degrausNecessarios = alturaDesejada/alturaDegrau;
	
	printf("O usuario devera subir %.2f degraus", degrausNecessarios);
	
	return 0;
}
