#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

typedef struct Elemento{
	
	char nome[50];
	struct Elemento *ant,*prox;
	
}TElemento;

typedef struct Fila{
	
	TElemento *inic, *fim;
	
}TFila;

void inicializaFila(TFila *f);

int filaVazia(TFila *f);

void insereElemento(TFila *f, char *elemNome);

void exibeFila(TFila f);

TElemento *retiraElemento(TFila *f);