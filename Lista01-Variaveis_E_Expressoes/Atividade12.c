#include <stdio.h>

int main(){
	float mi, km;
	
	printf("Digite o numero desejado em milhas: \n");
	scanf("%f", &mi);
	
	km = mi*1.61;
	
	printf("O valor em km e: %f", km);
	
	return 0;
}
