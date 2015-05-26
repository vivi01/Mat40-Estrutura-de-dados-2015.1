//Interface da pilha
typedef struct pilha Pilha;
typedef struct no No;

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

// função auxiliar para inserir um elemento no inicio da lista
No* insereInicio(No* l, float f);
// função auxiliar para remover um elemento no inicio da lista
No removeInicio(No* l);
// função para imprimir os elementos da pilha
void imprime (Pilha* p);


