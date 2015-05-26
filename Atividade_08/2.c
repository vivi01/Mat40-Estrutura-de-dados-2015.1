#include<stdio.h>
#include<stdlib.h>
#include "pilha.h"
struct no{ float info;
          struct no* prox;
};

struct pilha { No* prim;
};
//fun��o para criar uma pilha e inicializar a  lista como vazia
Pilha* cria()
{
	No* l == NULL;
	Pilha* novo = (Pilha*)malloc(sizeof(Pilha));
	if(novo == NULL)
		printf("Memoria insuficiente!!");
	novo->prim = NULL;	
	return novo;
}
// fun��o auxiliar para inserir um elemento no inicio da lista
No* insereInicio(No* l, float f)
{
	No* novo = (No*)malloc(sizeof(No));
	if(novo == NULL)
		printf("Memoria insuficiente!!");
		novo->info = f;
		novo->prox = l;
		return novo;
}
// fun��o auxiliar para remover um elemento no inicio da lista
No removeInicio(No* l)
{
	if(l == NULL)
			printf("Lista vazia!!N�o h� dados para serem removidos");
			No* novo = l->prox;
			free(l);
			return novo;	
}
void insere(Pilha*p, float f)
{
	p->prim = insereInicio(p->primi,f);
}
//fun��o para remover um elemento de  uma pilha
float removePilha(Pilha* p)
{
	float v;
	if(vazia(p))
	{
		printf("Pilha vazia!! Nao ha elemento para ser removido!");
		exit(1);
  }
	v = p->prim->info;
	p->prim = removeInicio(p->prim);
	return v;
}
//fun��o para verificar se uma pilha esta vazia
int vazia(Pilha* p)
{
		if (p-prim == NULL)
	 return 1;
	 else
	 return 0;
}
//fun��o para liberar a pilha
void liberaPilha(Pilha* p)
{
	No* novo = p->prim;
	while(novo!= NULL)
	{
		No* t = novo->prox;
		free(novo);
		novo = t;
	}
	free(p);
}
// fun��o para imprimir os elementos da pilha
void imprime(Pilha* p)
{
	No* q;
	for (q=p->prim; q!=NULL; q=q->prox)
	printf("%f\n",q->info);	
}

