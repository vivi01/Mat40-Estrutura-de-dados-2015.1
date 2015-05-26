#include<stdio.h>
#include<stdlib.h>
#include "pilha.h"
#define MAX 50 
struct pilha{ int n;
              float vet[MAX];	
};

//fun��o para criar uma pilha
Pilha* cria()
{
	Pilha* novo = (Pilha*)malloc(sizeof(Pilha));
	if(novo == NULL)
		printf("Memoria insuficiente!!");
	novo->n = 0;
	return novo;
}
//fun��o para inserir elementos em uma pilha
void insere(Pilha*p, float f)
{
	if(p->n == MAX)
	printf("Pilha cheia!! Remova alguns elementos para inserir novos!");
	p->vet[p->n] = f;
	p->n++;
}
//fun��o para remover um elemento de  uma pilha
float removePilha(Pilha* p)
{
	float v;
	if(p->n == 0)
	{
		printf("Pilha vazia!! Nao ha elemento para ser removido!");
			exit(1);
  }
	v = p->vet[p->n-1];
	p->n--;
	return v;
}
//fun��o para verificar se uma pilha esta vazia
int vazia(Pilha* p)
{
	if(p->n ==0)
	return 1;
	else
	return 0;
}
//fun��o para liberar a pilha
void liberaPilha(Pilha* p)
{
	free(p);	
}
// fun��o para imprimir os elementos da pilha
void imprime(Pilha* p)
{
	int i;
	for (i=p->n-1; i>=0; i--)
	printf("%f\n",p->vet[i]);	
}

int main()
{
	Pilha* pteste;
	float f;
	pteste = cria();
	insere(pteste,5);
  insere(pteste,10.5);
  insere(pteste,15);
	insere(pteste,20);
	insere(pteste,25);
	imprime(pteste);
	f = removePilha(pteste);
	imprime(pteste);
	vazia(pteste);
	liberaPilha(pteste);	
	imprime(pteste);	
	return 0;
}

