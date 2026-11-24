#include <stdio.h>

int main(){
	
	int numeros[6]= {10,25,7,40,15,30};
	int buscar, i;
	int encontrado=0;
	
	printf("Digite o numero que deseja buscar:");
	scanf("%d", &buscar);
	
	for (i=0; i<6; i++){
		if (numeros[i] == buscar){
			printf("Numero encontrado na posicao %d\n",i);
			encontrado=1;
			break;
		}
	}
	if (encontrado==0){
		printf("Numero nao encontrado!\n");
	}
	return 0;
}

