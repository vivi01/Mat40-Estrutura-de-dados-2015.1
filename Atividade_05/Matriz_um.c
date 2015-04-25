#include<stdio.h>
#include<stdlib.h>
#include "Matriz.h"

//Implementa��o de matriz usando vetores simples
struct matriz{ int* vetor;
         int linha;
         int coluna;
};

Matriz* Cria(int lin, int colun)
{
	Matriz* mat = (Matriz*) malloc(sizeof(Matriz)); // alocando a estrutura na mem�ria
	if(mat==null)
	{
		printf("N�o h� espaco disponivel para alocar a estrutura! \n");
		exit(1);
	}
	//definindo o numero de linhas e colunas da matriz
	mat->linha = lin; 
	mat->coluna = colun;
	mat->vetor = (int*) malloc(lin*colun*sizeof(int)); // alocando espa�o na mem�ria para o vetor
	return mat;
}

void Libera(Matriz* matr)
{
	free(matr->vetor); //retira o espa�o ocupado pelo vetor da mem�ria
	free(matr); //retira o espa�o ocupado pela struct da mem�ria	
}

int Acessa(Matriz* matr, int lin,int colun)
{
	int indice; // variavel auxiliar para  o indice do vetor
	//Verificando se existe elemento na linha e coluna especificada
	if(lin>=matr->linha || lin<0 || colun<0 || colun>=matr->coluna)
	{
		printf("Posicao solicitada n�o existe! Por gentileza escolher outra.\n");
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
		printf("Atribuicao inv�lida! Por gentileza escolher outra. \n");
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
	if (mat->linha!=mat->coluna) 
	{
		sime=0;
	 printf("Matriz nao simetrica\n");
	}
	else
	{
		printf("Matriz Quadrada\n"); 
		for (i=0; (i<mat->linha)&&(sime==1); i++)
		{
		 	for (j=0; (j<mat->coluna)&&(sime==1); j++) 
		 	{
				k=i*mat->coluna+j;
				l=j*mat->coluna+i;
				if (mat->dado[k] !=mat->dado[l]) 
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
    int trans[mat->coluna][mat->linha];
	for (j = 0; j < mat->linha;j++)
	{
		for (i = 0; i < mat->coluna; i++)
		{
			k=i*mat->coluna+j;
			trans[j][i] = mat->dado[k];            
        }
    } 
	printf("Transposta feita");      
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
 	printf("%d\n",Acessa(m,1,1));
 	printf("%d\n",Acessa(m,1,2));
 	printf("%d\n",Acessa(m,1,3));
 	printf("%d\n",Coluna(mat));
	QuadradaSimetrica(mat);
	MatrizTransposta(mat);	
	Libera(mat);	    
 }


