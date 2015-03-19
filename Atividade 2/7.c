#include <stdio.h>
#include <stdlib.h>
 
void ordenacaoCrescente();
void ordenacaoDecrescente();
void ordenacaoMaiorMeio();

 float vet[3]; 

void main() 
{
	//float A,B,C, veet[3];
	int I,k,j;
	printf("Digite o valor de I (1,2,3): ");
	scanf("%d",&I);

	for (k=0; k<3; k++)
	{
		printf("Digite um numero: ");
    scanf("%f", &vet[k]);
  }
  switch(I)
	{
		case 1: 
		{
			ordenacaoCrescente();
		for (k=0; k<3; k++)			
			printf("Valores ordenados: %.2f \n", vet[k]);
			
    break;
    }
  
	  case 2:
	 	{
	 		ordenacaoDecrescente();
			for (k=0; k<3; k++)
					{
								printf("Valores ordenados: %f \n", vet[k]);
		       }
    break;
    }
    case 3:
    	{
    		ordenacaoMaiorMeio();
				for (k=0; k<3; k++)			
						printf("Valores ordenados: %f \n", vet[k]);
						break;
		 }
			 
	}
				printf("\n");
        system("pause");
	}
 void ordenacaoCrescente()
		{          
        int i,j,aux;
 
            for( i=0; i<3; i++ )
						{          	
                 for( j=i+1; j<3; j++ )
								 {
                      if( vet[i] > vet[j] )
											{ 
                          aux = vet[i];
                          vet[i] = vet[j];
                          vet[j] = aux;
                      }
                 }
            }
            
            
    }
void ordenacaoDecrescente()
	{          
        int i, j, aux;
 
            for( i=0; i<4; i++ )
						{
                 for( j=i+1; j<4; j++ )
								 {
                      if( vet[i] < vet[j] )
											{ 
                          aux = vet[i];
                          vet[i] = vet[j];
                          vet[j] = aux;
                      }
                 }
            }
 }
void ordenacaoMaiorMeio()
{	
	int  aux;
	ordenacaoCrescente();
  	aux = vet[2];
		vet[2]= vet[3];
		vet[3] = aux;
}

