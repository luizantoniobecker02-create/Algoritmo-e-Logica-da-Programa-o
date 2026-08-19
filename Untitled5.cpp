#include <stdio.h>
#include <string.h>//necessario para manipular textos 

int main(){
//variaveis para armazenar o cadastro	
	char nome [50];
	int idade = 0;
	int cadastro = 0;//flag (bandeira) para saber se ja existe um cadastro
	int opcao;
	
	do{
		
		printf("\n================\n");
		printf("\n SISTEMA DE CADASTRO \n");
		printf("\n 1.Cadastrar usuario \n");
		printf("\n 2.Consultar cadastro \n");
		printf("\n 3. Sair \n");
		printf("\n Escolha uma opcao: \n");
		printf("%d", &opcao);
		
		//limpa o caractere `enter` pendente no buffer apos o scanf de numeros
		getchar();
		
		switch (opcao){
			case 1:
				printf("\n---NOVO CADASTRO---\n");
				printf("Digite o nome: ");
				//fgets le o nome completo(incluindo espacos) de forma segura
				
				fgets(nome, 50, stdin);
				
				//remove a quebra de linha (\n) que o fgets costuma capturar no final
				nome[strcspn (nome, "\n")] = 0;
				
				printf("Digite a idade: ");
				scanf("%d", &idade);
				
				cadastro = 1;//marca que agora temos um usuario cadastrado!
				printf("Cadastro realizado com sucesso!\n");
				break;
				
				case 2:
					printf("\n---CONSULTA DE CADASTRO---\n");
					//condicional alinhada/simples para verificar se ha dados
					if (cadastro ==1){
						printf("Nome: %s\n", nome);
						printf("idade: %d anos \n", idade);
					}else{
						printf("Nenhum usuario cadastrado no momento1 \n");
					}
					break;
					
					case 3:
						printf("\n Encerrando o sistema...\n");
						break;
						
					default:
						printf("\n Opcao invalida! Tente novamente. \n");
						break;		
			}
			
		}while (opcao != 3);//o menu repete ate o usuario digitar 3 para sair
		
		return 0;
		
	}
