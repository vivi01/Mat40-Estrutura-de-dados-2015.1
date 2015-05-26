//Interface da pilha
typedef struct pilha Pilha;

//função para criar uma pilha
Pilha* cria();

//função para inserir elementos em uma pilha
void insere(Pilha*p, float f);

//função para remover um elemento de  uma pilha
float removePilha(Pilha* p);

//função para verificar se uma pilha esta vazia
int vazia(Pilha* p);

//função para liberar a pilha
void liberaPilha(Pilha* p);

