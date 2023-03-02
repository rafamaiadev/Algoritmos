#include <stdio.h>

int main() {
	float h, r, v;
	
	printf("Digite um valor para a altura: \n");
	scanf("%f", &h);
	
	printf("Digite um valor para o raio: \n");
	scanf("%f", &r);
	
	v = (r*r*3.141592)*h;
	
	printf("O volume do cilindro e: %f", v);
	
	return 0;
}
