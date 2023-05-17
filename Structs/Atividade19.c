# include <stdio.h>

struct Aeroporto {
	int codigo;
	int vooSaida;
	int vooChegada;
}aeroporto[5];

struct Voo {
	int Origem;
	int Destino;
}voo[5];

int main() {
	int i, codigoOrigem, codigoDestino;
	
	for(i=0; i<5; i++) {
		aeroporto[i].codigo = i;
		aeroporto[i].vooSaida = 0;
		aeroporto[i].vooChegada = 0;
	}
	
	for(i=0; i<5; i++) {
		printf("Digite o codigo do aeroporto de origem do voo %d: ", i+1);
		scanf("%d", &codigoOrigem);
		if(codigoOrigem >= 0 && codigoOrigem < 5) {
			voo[i].Origem = codigoOrigem;	
	} else {
		printf("Codigo de origem invalido.\n");
		i--;
	}	
	
		printf("Digite o codigo do aeroporto de destino do voo %d: ", i+1);
		scanf("%d", &codigoDestino);
		if(codigoDestino >= 0 && codigoDestino < 5) {
			voo[i].Destino = codigoDestino;	
	} else {
		printf("Codigo de origem invalido.\n");
		i--;
	}
	
	aeroporto[codigoDestino].vooSaida++;
	aeroporto[codigoOrigem].vooChegada++;			
	}
	system("cls");
	
	printf("Aeroportos:\n");
    printf("Codigo do Aeroporto | Voos de Saida | Voos de Chegada\n");
    for (i = 0; i < 5; i++) {
        printf("%d                   | %d             | %d\n", aeroporto[i].codigo, aeroporto[i].vooSaida, aeroporto[i].vooChegada);
    }
    
    return 0;
}
