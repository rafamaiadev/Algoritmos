#include <stdio.h>

int main(){
	float c, k;
	
	printf("Digite um valor em Celsius: \n");
	scanf("%f", &c);
	
	k = c+273.15;
	
	printf("O valor em Kelvin e: %f", k);
	
	return 0;
}
