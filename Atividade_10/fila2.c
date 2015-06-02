#include<stdio.h>
#include<stdlib.h>
#include<fila.h>

//Implementação de fila usando lista
struct no {
float info;
struct no* prox;
};

struct fila {
No* ini;
No* fim;
};

Fila* cria (void)
{
  Fila* f = (Fila*) malloc(sizeof(Fila));
  f->ini = f->fim = NULL;
  return f;
}

void insere (Fila* f, float v)
{
  f->fim = ins_fim(f->fim,v);
  if (f->ini==NULL) /* fila antes vazia? */
  f->ini = f->fim;
}

float retira (Fila* f)
{
  float v;
  if (vazia(f))
  {
    printf("Fila vazia.\n");
    exit(1); /* aborta programa */
  }
v = f->ini->info;
f->ini = ret_ini(f->ini);
if (f->ini == NULL) /* fila ficou vazia? */
f->fim = NULL;
return v;
}

int vazia (Fila* f)
{
  return (f->ini==NULL);
}

void libera (Fila* f)
{
  No* q = f->ini;
  while (q!=NULL) 
  {
    No* t = q->prox;
    free(q);
    q = t;
  }
  free(f);
}
//função para imprimir
void imprime (Fila* f)
{
  No* q;
  for (q=f->ini; q!=NULL; q=q->prox)
  printf("%f\n",q->info);
}
