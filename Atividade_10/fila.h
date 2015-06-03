//Interface para implementação de fila 

typedef struct fila Fila;
typedef struct no No;

Fila* cria (void);
void insere (Fila* f, float v);
float retira (Fila* f);
int vazia (Fila* f);
void libera (Fila* f);
void imprime (Fila* f);


