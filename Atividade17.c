#include <stdio.h>

int main(){
	float cm, p;
	
	printf("Digite um valor em centimetros: \n");
	scanf("%f", &cm);
	
	p = cm/2.54;
	
	printf("O valor em polegadas e: %f", p);
	
	return 0;
}
