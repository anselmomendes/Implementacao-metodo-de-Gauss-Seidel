/*
Marabá, 21 de Setembro de 2017
UNIFESSPA - Universidade Federal do Sul e Sudeste do Pará;
Engenharia da Computação 2015;
Implementação método de Gaus Seidel;
Discentes:

	Anselmo Mendes Oliveira
	Fernando da Silva Freire
	
-Esse codigo possui um algoritimo que realiza o calculo de matrizes utilizando o método de Gaus-seidel;
-Nele é possivel escolher o tamanho da matriz em tempo de execução, usando a função malloc;
-O código dar ao usuario a opção de definir a quantidade de interações;

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "calculoNumerico.h"

 main(){
	setlocale(LC_ALL, "Portuguese");
	int n,m;
	double erro;
	double* v;
	printf("==================================================\n");
	printf("             MÉTODO DE GAUS SEIDEL  \n");
	printf("==================================================\n\n");
	printf("Digite o número de equações!:  ");
	scanf("%d",&n);
	printf("Digite o erro mínimo da função: ");
	scanf("%lf",&erro);
	m = n+1;
	Sistema** s = cria_matriz(n,m);
	insere_matriz(s,n,m);
	calcula_matriz(s,n,m,erro);
	imprime_matriz(s,n,m);
	libera_matriz(s,n);
	system("pause");
}
