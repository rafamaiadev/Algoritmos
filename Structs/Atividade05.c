#include <stdio.h>

int main() {
	struct Vetor {
		float x;
		float y;
		float z;
	}v1, v2, soma;
	
	v1.x = 10;
	v2.x = 5;
	v1.y = 6;
	v2.y = 7;
	v1.z = 4;
	v2.z = 3;
	
	soma.x = v1.x + v2.x;
	soma.y = v1.y + v2.y;
	soma.z = v1.z + v2.z;
	
	printf("A soma de 2 vetores e: %.2f, %.2f, %.2f", soma.x, soma.y, soma.z);
	return 0;
}
