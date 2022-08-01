#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "Fila.h"

void inicializaFila(TFila *f){
	
	f->inic = NULL;
	f->fim = NULL;
	
}

int filaVazia(TFila *f){
	
	if(f->inic == NULL)
		return 1;
	else
		return 0;
}

void insereElemento(TFila *f, char *elemNome){
	
	TElemento *novo;
	
	novo = (TElemento *)malloc(sizeof(TElemento));
	strcpy(novo->nome, elemNome);
	novo -> prox = NULL;
	novo -> ant = NULL;
	
	if(filaVazia(f)){
		f->inic = novo;
		f->fim = novo;
	}else{
		f->fim->prox = novo;
		novo->ant = f->fim;
		f->fim = novo;
	}
}

void exibeFila(TFila f){
	
	TElemento *atual;
	int contador = 0;
	
	printf("\n\n\n\t======|FILA|======\t\n\n\n");
	
	atual = f.inic;
	
	while (atual != NULL){
		
		printf("\tO %d-ésimo da fila é: %s", ++contador,atual->nome);
		atual = atual->prox;
	
	}
	
	printf("\n\n\n\t======|FIM DA FILA|======\t\n\n\n");
	
}

TElemento *retiraElemento(TFila *f){
	
	TElemento *retirado;
	
	retirado = NULL;
	
	if(!filaVazia(f)){
		
		retirado = f->inic;
		
		f->inic = f->inic->prox;
		
		if(f->inic == NULL)
			f->fim = NULL;
		else
			f->inic->ant = NULL;
		
		retirado->prox = NULL;
	}else{
		
		printf("\n\n\t ERRO: Ocorreu underflow na fila, ela chegou ao fim!");
	}
}

