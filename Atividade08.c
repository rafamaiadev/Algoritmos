#include <stdio.h>

int main() {
	float k, c;
	
	printf("Digite um valor em Kelvin: \n");
	scanf("%f", &k);
	
	c = k-273.15;
	
	printf("O valor em Celsius e: %f \n", c);
}
