//Interface para implementação de fila 

typedef struct fila Fila;
typedef struct no No;

Fila* cria (void);
void insere (Fila* f, float v);
float retira (Fila* f);
int vazia (Fila* f);
void libera (Fila* f);
void imprime (Fila* f);
Atividade 02/06

#include<stdio.h>
#include<stdlib.h>
#include "fila.h"
#define NUM 100 

//Implementação de fila usando vetor

struct fila {
int ini, fim;
float vet[NUM];
};
//Função para criar uma fila
Fila* cria (void)
{
	Fila* f = (Fila*)malloc(sizeof(Fila)); //alocação dinâmica
	f->ini = 0;
	f->fim = 0;
	return f;
}
//função para inserção na fila
void insere (Fila* f, float v)
{
	if(f->fim == N)
	{	
	  printf("Fila cheia! Nao e possivel inserir");
    }
	else
	{
	   f->vet[f->fim] = v;
	   	f->fim++;
		
	}
	
}
//função para verificar se a fila está vazia
int vazia
{
	if(f->ini == 0)
	 return 1
	 else 
	 return 0;
}
//função para remover elementos da fila
float retira(Fila* f)
{
	
}
void imprime(Fila* f)
{
	int i;
	if(f->ini == 0)
	 printf("Fila vazia!");
	for (i=f->ini; i!=f->fim;i++)
	  printf("%f",f->vet[i]);	
}
float retira (Fila* f);
int vazia (Fila* f);
void libera (Fila* f);
int main()
{
	Fila* teste = cria();
	imprime(teste);
	insere(teste,5.5);
	insere(teste,6.0);
	imprime(teste);
	
	return 0; 
}
