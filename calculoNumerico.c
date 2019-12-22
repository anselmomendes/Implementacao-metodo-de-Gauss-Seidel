#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include "calculoNumerico.h"

int i, j, controle=0;
double* v;

//Cria  a matriz dinâmica
Sistema** cria_matriz(int n, int m){
	Sistema** s;
	s = (Sistema**) malloc(n*(sizeof(Sistema*)));
		for(i=0;i<n;i++){
			s[i] = (Sistema*) malloc(m*(sizeof(Sistema)));
		}
	return s;
}

//Exibe a matriz solução
void imprime_matriz(Sistema** s, int n, int m){
	printf("#########\n Matriz\n#########\n");
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			printf ("%lf",s[i][j]);
			printf("  ");
		}printf("\n");
	}printf("\n");
}

//Insere todos os valores da matriz
void insere_matriz(Sistema** s, int n, int m){

	printf("Insira cada termo da matriz de ordem %d x %d\n\n",n,m);
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			printf("Digite o termo (%d x %d): ",(i+1),(j+1));
			scanf("%lf",&s[i][j]);
		}
	}printf("\n");
}

//Calcula solução para matriz usando o método de Gaus Seidel
void calcula_matriz(Sistema** s, int n, int m, double erro){
	int cont = 0;
	double b;
	//Cria vetor que armazena o resultado final;
	v = (double*) malloc(n*(sizeof(double)));
	//Cria vetor buffer que armazena resultado temporário;
	double* v_aux = (double*) malloc(n*(sizeof(double)));
	//Zerar os valores acumulados nas variáveis;
	for(j=0;j<n;j++){
		v[j] = 0;
		v_aux[j] = 0;
	}
	//Cria vetor auxiliar para realizar os cálculos;
	double* aux = (double*) malloc(n*(sizeof(double)));
	//Acumulador que armazena os valores quando isolamos a variável;
	double total = 0.0;
	//zera a variável auxiliar para garantir a contagem correta;
	int i=0;
	while(!(controle > 10 && (b < erro))){
		//printf("erro %lf\n\n",b);
		for(j=0; j<n; j++){
			//Produto entre o valor atual da variável e a constante na matriz;
			//-1 por que não consegui colocar total- aux[j] la em baixo;
			aux[j] = (s[i][j] * v[j] * (-1));			
	}
		for(j=0; j<n; j++){
		//Soma os valores de x[] negativo, pois passamos para outro lado, feito na linha 48;
			if(i!=j) total = total + aux[j];
	}
		for(j=0; j<n; j++){
			if(i==j){
				total = (total + s[i][n]); // soma com os valores y[]
				total = (total / s[i][i]);	// passa dividindo o valor de ai;
				v_aux[i] = total;				// atualiza o valor de x[];
			}
		}
	total = 0;
	i++;
	controle++;
	cont = n;
	for(cont = 0; cont > 0; cont++){
	b = (((v_aux[cont]) - (v[cont]))/(v_aux[cont]));
	if(b < 0) b = -b; // módulo do |V[n] - V[n-1]|
	}
	//Atribui os valores da interação atual a matriz solução v[n]
	if(i==n){
		i=0;
		for(j=0;j<n;j++) v[j] = v_aux[j];
	}
}
	resultado_matriz(v,n);
}

//Imprime o vetor solução da matriz
void resultado_matriz(double* v, int n){
	
	for(i=0; i<n; i++){
		printf("[%lf] \n",v[i]);
	}	
}

//Libera o espaço de memória ocupada pela matriz
void libera_matriz(Sistema** s, int n){
	printf("Liberando memória...\n");
	for(i=0; i<n; i++){
		
			free(s[i]);
		}
	free(s);
	printf("Memória liberada!\n");
}
