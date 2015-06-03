#include<stdio.h>
#include<stdlib.h>
#include<fila.h>
#define N 100

//Implementação de fila usando vetor
struct fila {
int ini, fim;
float vet[N];
};

//Função para criar uma fila
Fila* cria (void)
{
	Fila* f = (Fila*)malloc(sizeof(Fila)); 
	f->ini = 0;
	f->fim = 0;
	return f;
}
//Função para inserção  na fila
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
// função para verificar se a fila esta vazia

int vazia (Fila* f)
{
  return (f->ini == f->fim);
}
// função para retirar um elemento da fila
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
// função para desalocar da fila

void libera (Fila* f)
{
  free(f);
}
//função para imprimir
void imprime (Fila* f)
{
  int i;
  for (i=f->ini; i!=f->fim; i=incr(i))
  printf("%.2f \n",f->vet[i]);
}
