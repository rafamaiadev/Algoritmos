#include <stdio.h>
#include <math.h>

int main() {
	float a, b, hipotenusa;
	
	printf("Digite o valor do cateto 1: \n");
	scanf("%f", &a);
	
	printf("Digite o valor do cateto 2: \n");
	scanf("%f", &b);
	
	hipotenusa = sqrt(a*a + b*b);
	
	printf("O valor da hipotenusa e: %.2f", hipotenusa);
	
	return 0;
}
