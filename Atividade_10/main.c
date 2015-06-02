/* Programa de  teste da fila */
#include <stdio.h>
#include "fila.h"


int main (void)
{
  Fila* f = cria();
  insere(f,45.0);
  insere(f,30.8);
  insere(f,91.7);
  insere(f,74.9);
  printf("Primeiro elemento: %f\n", retira(f));
  printf("Segundo elemento: %f\n", retira(f));
  printf("Configuracao da fila:\n");
  imprime(f);
  libera(f);
  return 0;
}
