#include <stdio.h>

int main(){
	int vetor[7]={2,5,8,12,16,23,38};
	int inicio=0;
	int fim= 6;
	int meio;
	int numero=23; 
	int encontrado= 0;
	
	while (inicio<=fim){
		meio = inicio + (fim - inicio) / 2;
		
		if(vetor[meio]==numero){
			printf("Numero encontrado na posicao %d", meio);
			encontrado = 1;
			break;
		}
		else if (vetor[meio]<numero){
			inicio = meio + 1;
			
		}
	}
	if (encontrado == 0){
		printf("Numero nao encontrado!");
	}
	
	return 0;
}
