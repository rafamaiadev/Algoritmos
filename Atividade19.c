#include <stdio.h>

int main (){
	float l, m;
	
	printf("Digite um valor em litros: \n");
	scanf("%f", &l);
	
	m = l/1000;
	
	printf("O valor em metros cubicos e: %f", m);
	
	return 0;
}
