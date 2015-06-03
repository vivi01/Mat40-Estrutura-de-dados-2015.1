/* Programa de  teste da fila */
#include <stdio.h>
#include "fila.h"


int main (void)
{
	int v;
	Fila* teste = cria();
	v = vazia(teste);
	printf("%d \n", v);
	insere(teste,5.5);
	insere(teste,6.0);
	insere(teste,7.8);
	insere(teste,9.25);
	imprime(teste);
	retira(teste);
	imprime(teste);	
	return 0;
}
