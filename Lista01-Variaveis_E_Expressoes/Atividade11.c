#include <stdio.h>

int main(){
	float ms, kh;
	
	printf("Digite um valor para a velocidade: \n");
	scanf("%f", &ms);
	
	kh = ms*3.6;
	
	printf("O valor da velocidade em kh e: %f", kh);
	
	return 0;
}
