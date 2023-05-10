#include <stdio.h>

int main() {
	int i, v[6], soma = 0, cont = 0;
	int sec[6];
	printf("Digite 6 numeros inteiros:\n");
	for(i=0; i<6; i++) {
		scanf("%d", &v[i]);
	}
	for(i=0; i<6; i++) {
		if(i == 5 && v[i]-1 == v[i]) {
			sec[i] = v[i];
			soma+= sec[i];
			break;
		}
		
		if(v[i] == v[i+1]-1) {
			sec[cont] = v[i];
			cont++;
			soma += sec[i];
		}
	}
	
	printf("A sequencia encontrada e:\n");
	for(i=0; i<cont; i++) {
		printf("%d ", sec[i]);
	}
	
	printf("\nA soma da sequencia e: %d\n", soma);
	
	return 0;
}
