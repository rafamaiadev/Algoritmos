#include <stdio.h>

int main(){
	float km, mi;
	
	printf("Digite o numero desejado em km: \n");
	scanf("%f", &km);
	
	mi = km/1.61;
	
	printf("O valor em milhas e: %f", mi);
	
	return 0;
}
