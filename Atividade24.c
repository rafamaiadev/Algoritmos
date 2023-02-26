#include <stdio.h>

int main(){
	float m2, a;
	
	printf("Digite um valor em metros quadrados: \n");
	scanf("%f", &m2);
	
	a = m2*0.000247;
	
	printf("O valor em acres e: %f", a);
	
	return 0;
}
