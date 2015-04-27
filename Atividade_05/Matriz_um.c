#include<stdio.h>
#include<stdlib.h>
#include "Matriz.h"

//Implementação de matriz usando vetores simples
struct matriz{ int* vetor;
         int linha;
         int coluna;
};

Matriz* Cria(int lin, int colun)
{
	Matriz* mat = (Matriz*) malloc(sizeof(Matriz)); // alocando a estrutura na memória
	if(mat==NULL)
	{
		printf("Não há espaco disponivel para alocar a estrutura! \n");
		exit(1);
	}
	//definindo o numero de linhas e colunas da matriz
	mat->linha = lin; 
	mat->coluna = colun;
	mat->vetor = (int*) malloc(lin*colun*sizeof(int)); // alocando espaço na memória para o vetor
	return mat;
}

void Libera(Matriz* matr)
{
	free(matr->vetor); //retira o espaço ocupado pelo vetor da memória
	free(matr); //retira o espaço ocupado pela struct da memória	
}

int Acessa(Matriz* matr, int lin,int colun)
{
	int indice; // variavel auxiliar para  o indice do vetor
	//Verificando se existe elemento na linha e coluna especificada
	if(lin >= matr->linha || lin<0 || colun<0 || colun >= matr->coluna)
	{
		printf("Posicao solicitada não existe! Por gentileza escolher outra.\n");
		exit(1);
	}
	indice = lin*matr->coluna + colun;
	return 	matr->vetor[indice]; // retorna o elemento contido no indice 
}
void Atribui(Matriz* matr, int lin,int colun, int valor)
{
	int indice; // variavel auxiliar para  o indice do vetor
	//Verificando se existe elemento na linha e coluna especificada
	if(lin>=matr->linha || lin<0 || colun<0 || colun>=matr->coluna)
	{
		printf("Atribuicao inválida! Por gentileza escolher outra. \n");
		exit(1);
	}
	indice = lin*matr->coluna + colun;
	matr->vetor[indice] = valor;	
}
int Linha(Matriz* matr)
{
	return matr->linha; 	
}

int Coluna(Matriz* matr)
{
	return matr->coluna;	
}

void QuadradaSimetrica (Matriz* matr)
{
	int k,l,i,j;
	int sime=1;
	if (matr->linha != matr->coluna) 
	{
		sime=0;
	  printf("Matriz nao simetrica\n");
	}
	else
	{
		printf("Matriz Quadrada\n"); 
		for (i=0; (i<matr->linha) && (sime==1); i++)
		{
		 	for (j=0; (j<matr->coluna)&&(sime==1); j++) 
		 	{
				k=i*matr->coluna+j;
				l=j*matr->coluna+i;
				if (matr->vetor[k] != matr->vetor[l]) 
					sime=0;
			}
		}
		if (sime==1) 
    	    printf ("Matriz simetrica\n");
		if (sime==0) 
		  printf ("Matriz nao simetrica\n");                                     
    }
}

Matriz* MatrizTransposta(Matriz* matr)
{
	int i,j,k;
    int trans[matr->coluna][matr->linha];
	for (j = 0; j < matr->linha;j++)
	{
		for (i = 0; i < matr->coluna; i++)
		{
			k=i*matr->coluna+j;
			trans[j][i] = matr->vetor[k];            
        }
    } 
	printf("Transposta feita \n");      
	return matr;     
}

 main()
 {
	Matriz* mat;
	mat = Cria(2,2);
	Atribui(mat,0,0,4);
	Atribui(mat,0,1,5);
	Atribui(mat,1,0,6);
	Atribui(mat,1,1,10);
 	printf("%d\n",Acessa(mat,0,1));
 	printf("%d\n",Acessa(mat,0,0));
 	printf("%d\n",Acessa(mat,1,0));
 	printf("%d\n",Acessa(mat,1,1));
 	printf("%d\n",Coluna(mat));
	QuadradaSimetrica(mat);
	printf("%d\n", MatrizTransposta(mat));		
	Libera(mat);	    
 }


