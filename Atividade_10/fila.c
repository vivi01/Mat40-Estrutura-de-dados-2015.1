#include<stdio.h>
#include<stdlib.h>
#include<fila.h>

#define N 100
struct fila {
int ini, fim;
float vet[N];
};

Fila* cria (void)
{
Fila* f = (Fila*) malloc(sizeof(Fila));
f->ini = f->fim = 0; // inicializa fila vazia 
return f;
}
void insere (Fila* f, float v)
{
if (incr(f->fim) == f->ini) { // fila cheia: capacidade esgotada
*/
printf("Capacidade da fila estourou.\n");
exit(1); // aborta programa *
}
// insere elemento na próxima posição livre 
f->vet[f->fim] = v;
f->fim = incr(f->fim);
}
float retira (Fila* f)
{
float v;
if (vazia(f)) {
printf("Fila vazia.\n");
exit(1); /* aborta programa */
}
/* retira elemento do início */
v = f->vet[f->ini];
f->ini = incr(f->ini);
return v;
}
int vazia (Fila* f)
{
return (f->ini == f->fim);
}
void libera (Fila* f)
{
free(f);
}