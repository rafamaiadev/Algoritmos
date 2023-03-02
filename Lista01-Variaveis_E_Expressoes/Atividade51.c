#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	float x, y, distancia;
	
	printf("Digite um valor para x:\n");
	scanf("%f", &x);
	
	printf("Digite um valor para y:\n");
	scanf("%f", &y);
	
	distancia = sqrt(pow(x,2) + pow(y,2));
	
	printf("A distancia  da coordenada (%.0f,%.0f) para a origem e: %.2f", x, y, distancia);
	
	return 0;
}
