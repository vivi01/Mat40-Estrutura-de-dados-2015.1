#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define MAX 100

struct aluno {
char nome[81];
int mat;
char end[121];
char tel[21];
};
typedef struct aluno Aluno;
typedef struct aluno *PAluno;
PAluno tab[MAX];

void inicializa()
{
	int i;
	for (i=0; i<MAX; i++)
	tab[i] = NULL;
}

void preenche (int i)
{
	if (tab[i] == NULL)
	 	tab[i] = (PAluno*)malloc(sizeof(PAluno));
	printf("Digite o nome do aluno: \n");
	scanf(" %s", tab[i]->nome);
	printf("Digite a matricula do aluno: \n");
	scanf("%d", tab[i]->mat);
	printf("Digite o endereco do aluno: \n");
	scanf(" %s", tab[i]->end);
	printf("Digite o telefone do aluno: \n");
	scanf(" %s", tab[i]->tel);
}

void removerAluno(int i)
{
	if(tab[i] != NULL)
	{
		free(tab[i]);
		tab[i] = NULL;
	}	
}

void consulta(int i)
{
	if(tab[i] != NULL)
	{
		printf("Nome:  %s\n", tab[i]->nome);
		printf("Matricula:  %d\n", tab[i]->mat);
		printf("Endereco:  %s\n", tab[i]->end);
		printf("Telefone:  %s\n", tab[i]->tel);		
	}
	else
	 printf("Nao existe aluno cadastrado nesta posicao!");
}
void imprimeAlunos()
{
	int i;
	for(i = 0; i<MAX; i++)
	consulta(i);
}

int main()
{
	inicializa();
	preenche (1);
	//preenche (2);
//	preenche (3);
//	removerAluno(2);
	consulta(1);
	imprimeAlunos();	
	return 0;
}
