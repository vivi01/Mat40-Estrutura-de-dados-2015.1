#include<stdio.h>
#include<stdlib.h>
#include "pilha.h"
struct no{ float info;
          struct no* prox;
};

struct pilha { No* prim;
};
//função para criar uma pilha e inicializar a  lista como vazia
Pilha* cria()
{
	No* l == NULL;
	Pilha* novo = (Pilha*)malloc(sizeof(Pilha));
	if(novo == NULL)
		printf("Memoria insuficiente!!");
	novo->prim = NULL;	
	return novo;
}
// função auxiliar para inserir um elemento no inicio da lista
No* insereInicio(No* l, float f)
{
	No* novo = (No*)malloc(sizeof(No));
	if(novo == NULL)
		printf("Memoria insuficiente!!");
		novo->info = f;
		novo->prox = l;
		return novo;
}
// função auxiliar para remover um elemento no inicio da lista
No removeInicio(No* l)
{
	if(l == NULL)
			printf("Lista vazia!!Não há dados para serem removidos");
			No* novo = l->prox;
			free(l);
			return novo;	
}
void insere(Pilha*p, float f)
{
	p->prim = insereInicio(p->primi,f);
}
//função para remover um elemento de  uma pilha
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
//função para verificar se uma pilha esta vazia
int vazia(Pilha* p)
{
		if (p-prim == NULL)
	 return 1;
	 else
	 return 0;
}
//função para liberar a pilha
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
// função para imprimir os elementos da pilha
void imprime(Pilha* p)
{
	No* q;
	for (q=p->prim; q!=NULL; q=q->prox)
	printf("%f\n",q->info);	
}


//Atividade 9
#include<stdio.h>
#include<stdlib.h>
#include "calc.h"
#include "pilha.h"

struct calc{ 
char f[21];
Pilha* p;
};

Calc* cria_calc(char* c)
{
	Calc* novo = (Calc*)malloc(sizeof(Calc));
	if(novo == NULL)
		printf("Memoria insuficiente!!");
	strcpy(novo->f,c) = c;
	novo->p = cria_calc(c);	
	return novo;
}
void operando(Calc* c,float v);
void operador(Calc* c, float op);
void libera_calc(Calc* c);
int main()
{
	Calc* c;
	char* f =.2f;
	c = cria_calc(f);
	
	return 0;
}
