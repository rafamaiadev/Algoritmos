#include <stdio.h>

int main() {
	float f, c;
	
	printf("Digite um valor em Fahrenheit: \n");
	scanf("%f", &f);
	
	c = (f-32)/1.8;
	
	printf("O valor em Celsius e: %f", c);
	
	return 0;
}
