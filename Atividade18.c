#include <stdio.h>

int main (){
	float m, l;
	
	printf("Digite um valor em metros cubicos: \n");
	scanf("%f", &m);
	
	l = m*1000;
	
	printf("O valor em litros e: %f", l);
	
	return 0;
}
