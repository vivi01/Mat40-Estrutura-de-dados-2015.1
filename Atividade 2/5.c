#include <stdio.h>
#include <stdlib.h>

 void ordenacao();    
    int vet[4]; 
 
    int main(){           
 
    int i; 
     printf("Digite tres numeros ordenados em ordem crecente e um numero qualquer: \n"); 
        for (i=0; i<4; i++){
				  
            printf("Digite um  numero:");
            scanf("%d", &vet[i]);
        }
         ordenacao();
 
        for (i=0; i<4; i++){
				 
            printf("Valores ordenados: %d \n", vet[i]);
        }
 
        printf("\n");
        system("pause");
 
    }  
    void ordenacao()
		{          
        int i, j, aux;
 
            for( i=0; i<4; i++ ){
                 for( j=i+1; j<4; j++ ){
                      if( vet[i] < vet[j] ){ 
                          aux = vet[i];
                          vet[i] = vet[j];
                          vet[j] = aux;
                      }
                 }
            }
    }
