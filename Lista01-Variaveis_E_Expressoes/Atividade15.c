#include <stdio.h>

int main(){
	float r, g;
	
	printf("Digite um numero em radianos: \n");
	scanf("%f", &r);
	
	g = (r*180)/3.14;
	
	printf("O numero em graus e: %f", g);
	
	return 0;
}
