#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "Fila.h"

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"Portuguese");
	
	
	TElemento *elem;
	TFila fila;
	
	char *nomeElem;
	
	int indMenu;
	
	inicializaFila(&fila);
	
	//MENU INICIAL
	
	printf("\n\n\n===========================|Bem Vindo à Fila de atendimento|===========================");
	
	do{
	
		
		//OPÇÕES DO MENU
		
		printf("\n\nServiços disponíveis:\n"
				"1- Inserir elemento na fila\n"
				"2- Retirar elemento da fila\n"
				"3- Exibir fila atual\n"
				"0- Sair do programa\n");
				
		printf("\n\nPor favor, digite o serviço que necessita: ");
		scanf("%d", &indMenu);
		
		if(indMenu < 0){
		
			do{
				
				printf("\n\nERRO: número inválido!"
				"Por favor, digite o serviço que necessita baseado no menu apresentado: ");
				scanf("%d", &indMenu);
				
			}while(indMenu < 0);
			
		}
		
		//EXECUÇÃO
	
		switch(indMenu){
			
			case 0:
				
				printf("\nVocê optou por sair do programa!");
				return 0;
				
			break;
			
			case 1:
				
				printf("\n\nPor favor, digite o nome do indivíduo a ser acrescentado na fila: ");
				nomeElem = (char *)malloc(50*sizeof(char));
				gets(nomeElem);
				gets(nomeElem);
				insereElemento(&fila, nomeElem);
				
				printf("\n\nOperação concluída!");
				printf("\n\n=====================================================================");
				
			break;
			
			case 2:
				
				elem = retiraElemento(&fila);
				free(elem);
				
			break;
			
			case 3:
				
				exibeFila(fila);
				
			break;
		}
	
	}while(indMenu != 0);

	
	return 0;
}