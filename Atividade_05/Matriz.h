//Interface para acessar as funções das matrizes 1 e dois

typedef struct matriz Matriz;

// função para criar uma Matriz nxm
Matriz* Cria(int lin, int colun);

//Função para liberar a matriz da mémoria
void Libera(Matriz* matr);

//Função para acessar os elementos da linha e coluna x da matriz
int Acessa(Matriz* matr, int lin,int colun);

//função para inserir elementos na matriz
void Atribui(Matriz* matr, int lin,int colun,int valor);

//Função que retorna a quantidade de linhas
int Linha(Matriz* matr);

//Função que retorna a quantidade de colunas
int Coluna(Matriz* matr);

//Função para determinar se uma matriz é ou não quadrada simetrica
void QuadradaSimetrica (Matriz* matr);

//Fução para criar uma matriz transposta
Matriz* MatrizTransposta(Matriz* matr);





