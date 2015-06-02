/* Módulo para ilustrar utilização da fila */
#include <stdio.h>
#include "fila.h"
int main (void)
{
Fila* f = cria();
insere(f,20.0);
insere(f,20.8);
insere(f,21.2);
insere(f,24.3);
printf("Primeiro elemento: %f\n", retira(f));
printf("Segundo elemento: %f\n", retira(f));
printf("Configuracao da fila:\n");
imprime(f);
libera(f);
return 0;
}