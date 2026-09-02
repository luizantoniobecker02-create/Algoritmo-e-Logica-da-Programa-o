#include <stdio.h>
#include <string.h>

int main(){
	
	char cadastros[3][50];//matriz para armazenar 3 nomes(strings), cada um com ate 49 caracteres
	
	printf("---Cadastro de nomes---\n");
	
	for(int i=0;i<3;i++){//coletando os nomes via tecaldo
		printf("Digite o nome para o cadastro %d:", i + 1);
		
		//fgets le a string com espacos e evita estouro de buffer(memoria)
		fgets(cadastros[i],50, stdin);
		
		//remove a quebra de linha (\n) que o fgets costuma capturar no final
		cadastros[i][strcspn(cadastros[i],"\n")]='\0';
	}
	//exibe os nomes cadastrados
	printf("\n---Lista de cadastros realizados---\n");
	for (int i=0; i<3; i++){
		printf("Cadastro [%d]: %s\n", i, cadastros[i]);
	}
	return 0;
}
