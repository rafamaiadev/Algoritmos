#include <stdio.h>

int main(){
	float g, r;
	
	printf("Digite um numero em graus: \n");
	scanf("%f", &g);
	
	r = (g*3.14)/180;
	
	printf("O numero em radianos e: %f", r);
	
	return 0;
}
