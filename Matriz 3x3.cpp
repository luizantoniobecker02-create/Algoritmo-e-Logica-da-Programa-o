#include<stdio.h>

int main(){//Decalarando uma variavel
	int matriz[3][3]={//tranalha com numeros inteiros
	{10,20,30},
	{40,50,60},
	{70,80,90},
	};
	
	printf("Exibindo a matriz completa:\n");//exibe a  matriz completa
	
	for (int i=0;i<3;i++){//indica que o FOR ira trabalhar ate encontrar o numero 3
		for(int j=0; j<3;j++){
			printf("%d", matriz[i][j]);
			
			
		}
		printf("\n");
	}
	printf("\nElemento na posicao [1][2]: %d\n", matriz[1][2]);//mostra a posicao das linhas e colunas
	return 0;
}
