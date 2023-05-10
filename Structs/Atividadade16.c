#include <stdio.h>

struct Data {
	int dia;
	int mes;
	int ano;
};

struct Compromisso {
	char comp[60];
	struct Data data;
}compromisso[2];

int main() {
	int M, A, i;
	
	for(i=0; i<2; i++) {
		printf("Digite o compromisso %d: ", i+1);
		scanf(" %60[^\n]", compromisso[i].comp);
		
		printf("Digite o dia do compromisso %d: ", i+1);
		scanf("%d", &compromisso[i].data.dia);
		
		printf("Digite o mes do compromisso %d: ", i+1);
		scanf("%d", &compromisso[i].data.mes);
		
		printf("Digite o ano do compromisso %d: ", i+1);
		scanf("%d", &compromisso[i].data.ano);
		printf("\n");
	}
	
	do {
		printf("Digite um mes para analise dos compromissos(Digite 0 para encerrar):");
		scanf("%d", &M);
		if (M==0)break;
		printf("Digite um ano para analise dos compromissos:");
		scanf("%d", &A);
		
		system("cls");
		
		
		
		for(i=0; i<2; i++) {
		if(compromisso[i].data.mes == M && compromisso[i].data.ano == A) {
			printf("Compromisso:\n %s na data %d/%d/%d\n", compromisso[i].comp, compromisso[i].data.dia,compromisso[i].data.mes,compromisso[i].data.ano);
		}
	    }
	} while(M != 0);
	
	
	return 0;
}
