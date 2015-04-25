//Interface para acessar as fun��es das matrizes 1 e dois

typedef struct matriz Matriz;

// fun��o para criar uma Matriz nxm
Matriz* Cria(int lin, int colun);

//Fun��o para liberar a matriz da m�moria
void Libera(Matriz* matr);

//Fun��o para acessar os elementos da linha e coluna x da matriz
int Acessa(Matriz* matr, int lin,int colun);

//fun��o para inserir elementos na matriz
void Atribui(Matriz* matr, int lin,int colun,int valor);

//Fun��o que retorna a quantidade de linhas
int Linha(Matriz* matr);

//Fun��o que retorna a quantidade de colunas
int Coluna(Matriz* matr);

//Fun��o para determinar se uma matriz � ou n�o quadrada simetrica
void QuadradaSimetrica (Matriz* matr);

//Fu��o para criar uma matriz transposta
Matriz* MatrizTransposta(Matriz* matr);





