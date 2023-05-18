# include <stdio.h>

int Verificador(int num1) {
	
	if(num1 > 0) {
		printf("1");
	} else if(num1 == 0) {
		printf("0");
	} else {
		printf("-1");
	}
}

int main() {
	Verificador(-5);
}
