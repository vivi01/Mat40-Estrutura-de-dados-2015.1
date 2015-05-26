//Interface da pilha
typedef struct pilha Pilha;
typedef struct no No;

//fun��o para criar uma pilha
Pilha* cria();

//fun��o para inserir elementos em uma pilha
void insere(Pilha*p, float f);

//fun��o para remover um elemento de  uma pilha
float removePilha(Pilha* p);

//fun��o para verificar se uma pilha esta vazia
int vazia(Pilha* p);

//fun��o para liberar a pilha
void liberaPilha(Pilha* p);

// fun��o auxiliar para inserir um elemento no inicio da lista
No* insereInicio(No* l, float f);
// fun��o auxiliar para remover um elemento no inicio da lista
No removeInicio(No* l);
// fun��o para imprimir os elementos da pilha
void imprime (Pilha* p);


