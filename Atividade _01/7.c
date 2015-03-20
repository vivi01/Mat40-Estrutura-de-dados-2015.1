#include <stdio.h>
#include <stdlib.h>

int ConversaoMetroCent(int metro);
void main() 
{
	int m, cm;
	printf("Digite o valor em metros para conversao: \n");
	scanf("%d",&m);
	cm = ConversaoMetroCent(m);
	printf("O valor em centimetros eh %d", cm);
}
int ConversaoMetroCent(int metro)
{
   metro = metro*100;
   return metro;    
}

