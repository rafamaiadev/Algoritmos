#include <stdio.h>

int main() {
	int i, j = 0, k = 0, v1[3], v2[3], v[6] = {0,0,0,0,0,0};
	printf("Digite o valor do primeiro vetor:\n");
	for(i=0; i<3; i++) {
		scanf("%d", &v1[i]);
	}
	printf("Digite o valor do segundo vetor:\n");
	for(i=0; i<3; i++) {
		scanf("%d", &v2[i]);
	}
	
	for(i=0; i<6; i++) {
 		if(i == 0) {
			v[i] = v1[j];
			j++;
		} else if (i % 2 == 0 && i != 0){
			v[i] = v1[j];
			j++;
		}
		
		if(i % 2 != 0 && i != 0) {
			v[i] = v2[k];
			k++;
	}
}
	for(i=0; i<6; i++) {
		printf("%d ", v[i]);
	}
	
	return 0;
}
