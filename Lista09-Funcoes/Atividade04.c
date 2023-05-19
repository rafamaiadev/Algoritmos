# include <stdio.h>

void dataPorExtenso(int,int,int);

int main() {
	int diaInserido, mesInserido, anoInserido;
	printf("Digite uma data (dd/mm/aaaa)\n");
	
	printf("Digite o dia: ");
	scanf("%d", &diaInserido);
	
	printf("Digite o mes: ");
	scanf("%d", &mesInserido);
	
	printf("Digite o ano: ");
	scanf("%d", &anoInserido);
	
	dataPorExtenso(diaInserido, mesInserido, anoInserido);	
}

void dataPorExtenso(int dia,int mes,int ano) {
	char nomesMeses[12][15] = {"janeiro", "fevereiro", "março", "abril", "maio", "junho",
    "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"};
	
	printf("A data por extenso e: %d de %s de %d", dia, nomesMeses[mes-1], ano);
}
