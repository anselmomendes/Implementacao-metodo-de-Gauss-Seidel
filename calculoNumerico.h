typedef double Sistema;

Sistema** cria_matriz(int n, int m); 
//Cria a matriz e retorna um ponteiro para a matriz;
// x numero de linhas

void insere_matriz(Sistema** s, int n, int m);
//Insere cada termo da matriz

void calcula_matriz(Sistema** s, int n, int m, double erro); 
//Calcula utilizando o metodo de Gaus_Seidel;

void libera_matriz(Sistema** s, int n);
//Libera a mem�ria alocada para a matriz;

void imprime_matriz(Sistema** s, int n, int m);
//Imprime a matriz;

void resultado_matriz(double* v, int n);
//Imprime a matriz dos reultados;

int erro_matriz(double *v, double *v_aux, double erro);
//Calcula o erro total da matriz;
