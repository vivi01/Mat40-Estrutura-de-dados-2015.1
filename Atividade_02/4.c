#include <stdio.h>
#include <stdlib.h>

 void ordenacao();    
    int vet[3]; 
 
    int main(){           
 
    int i; 
 
        for (i=0; i<3; i++)
				{
					printf("Digite um numero: ");
          scanf("%d", &vet[i]);
        }
         ordenacao();
 
        for (i=0; i<3; i++
				){
				 
            printf("Valores ordenados: %d \n", vet[i]);
        }
 
        printf("\n");
        system("pause");
 
    }  
    void ordenacao()
		{          
        int i, j, aux;
 
            for( i=0; i<3; i++ ){
                 for( j=i+1; j<3; j++ ){
                      if( vet[i] > vet[j] ){ 
                          aux = vet[i];
                          vet[i] = vet[j];
                          vet[j] = aux;
                      }
                 }
            }
    }
