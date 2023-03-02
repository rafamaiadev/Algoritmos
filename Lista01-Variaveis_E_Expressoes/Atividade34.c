#include <stdio.h>

int main () {
	float raio, area;
	
	printf("Digite um valor para o raio do circulo: \n");
	scanf("%f", &raio);
	
	area = raio*raio*3.141592;
	
	printf("O valor da area do circulo e: %f", area);
	
	return 0;
}
