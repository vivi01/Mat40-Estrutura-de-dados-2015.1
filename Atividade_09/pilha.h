//Interface da pilha
typedef struct pilha Pilha;

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

