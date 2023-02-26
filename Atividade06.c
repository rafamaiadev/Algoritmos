#include <stdio.h>

int main(){
	float c, f;
	
	printf("Digite um valor em graus celsius: \n");
	scanf("%f", &c);
	
	f = (c*1.8)+32;
	
	printf("O valor em Fahrenheit e: %f", f);
	
	return 0;
}
