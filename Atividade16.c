#include <stdio.h>

int main(){
	float p, cm;
	
	printf("Digite um valor em polegadas: \n");
	scanf("%f", &p);
	
	cm = p*2.54;
	
	printf("O valor em centimetros e: %f", cm);
	
	return 0;
}
