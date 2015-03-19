#include <stdio.h>
#include <time.h>
#include <string.h>
 
int main(void)
{
 
  int dia1, mes1, ano1, dia2,mes2, ano2;
 
  printf("Digite o dia, mes e o ano da primeira data: \n");
  scanf("%d%d%d",&dia1,&mes1,&ano1);
  printf("Digite o dia, mes e o ano da segunda data:\n");
  scanf("%d%d%d",&dia2,&mes2,&ano2);
  if(ano1>ano2)
  	printf("A maior data eh %d%d%d ",dia1,mes1,ano1);
	else if(ano2>ano1)
	  	printf("A maior data eh %d%d%d ",dia2,mes2,ano2);
	  	else if (mes1>mes2)
	  	  	printf("A maior data eh %d%d%d ",dia1,mes1,ano1);
	  	  	else if (mes2>mes1)
	  	  		  	printf("A maior data eh %d%d%d ",dia2,mes2,ano2);
	  	  		  	else if(dia1>dia2)
	  	           	printf("A maior data eh %d%d%d ",dia1,mes1,ano1);
	  	  		  		  	else if (dia2>dia1)
	  	  		   		  	printf("A maior data eh %d%d%d ",dia2,mes2,ano2);  		  		  		  	  	
 return 0;
}
