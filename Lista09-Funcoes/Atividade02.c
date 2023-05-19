# include <stdio.h>

int Verificador() {
	int verificador;
	printf("Digite um digito para ser verificado o seu sinal: ");
	scanf("%d", &verificador);
	
	if(verificador > 0) {
		verificador = 1;
	} else if(verificador == 0) {
		verificador = 0;
	} else {
		verificador = -1;
	}
	
	return printf("Retorno = %d", verificador);
}

int main() {
	Verificador();
}
