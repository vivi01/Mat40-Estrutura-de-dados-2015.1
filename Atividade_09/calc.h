/* Arquivo que define a interface da calculadora */
typedef struct calc Calc;
/* funcoes exportadas */
Calc* cria_calc ( char * f);
void operando(Calc* c, float v);
void operador(Calc* c, char op);
void libera_calc(Calc* c);
