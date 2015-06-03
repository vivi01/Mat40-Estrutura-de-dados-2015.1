#include<stdio.h>
#include<stdlib.h>
#include<fila.h>
#define N 100

//Implementa��o de fila usando vetor
struct fila {
int ini, fim;
float vet[N];
};

//Fun��o para criar uma fila
Fila* cria (void)
{
	Fila* f = (Fila*)malloc(sizeof(Fila)); 
	f->ini = 0;
	f->fim = 0;
	return f;
}
//Fun��o para inser��o  na fila
void insere (Fila* f, float v)
{
	if(f->fim == NUM)
	{	
	  printf("Fila cheia! Nao e possivel inserir \n");
  }
	else
	{
		f->vet[f->fim] = v;
	  f->fim++;
	}	
}
// fun��o para verificar se a fila esta vazia

int vazia (Fila* f)
{
  return (f->ini == f->fim);
}
// fun��o para retirar um elemento da fila
float retira (Fila* f)
{
  float v;
  if (vazia(f)) 
  {
    printf("Fila vazia.\n");
    exit(1); 
  }
  v = f->vet[f->ini];
  f->ini++;
  return v;
}
// fun��o para desalocar da fila

void libera (Fila* f)
{
  free(f);
}
//fun��o para imprimir
void imprime (Fila* f)
{
  int i;
  for (i=f->ini; i!=f->fim; i=incr(i))
  printf("%.2f \n",f->vet[i]);
}
