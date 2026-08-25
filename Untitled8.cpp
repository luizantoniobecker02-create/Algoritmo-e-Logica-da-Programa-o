#include <stdio.h>
int main(){
	printf("---Tabela do Alfabeto---\n\n");
	
	printf("Letra | Codigo ASCII\n");
	printf("-------------------\n");
	
	//O laco FOR comeca com a letra  `A` e vai ate a letra `Z`
	//O incremento `letra++` pega a proxima letra do alfabeto 
	for (char letra = 'A'; letra <= 'Z'; letra++){
	//exibe a letra (%c) e depois o seu valor inteiro 
	printf ("%c|%d\n", letra, (int)letra);
	}
	return 0;
}
