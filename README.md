# Implementação do método de numérico de Gauss-Seidel

Esse projeto foi desenvolvido por uma dupla de alunos da **UNIFESSPA** fruto de um trabalho de disciplina de **Cálculo numérico** no qual foi necessário realizar a implementação do método utilizando uma linguagem livre. O projeto foi escrito em **C** e possui:
* TAD;
* Segmentação em funções;
* Alocação dinâmica;
* Ponteiros.

## Metódo de Gauss-Seidel

São métodos iterativos ou de aproximação fornecem uma alternativa aos métodos de eliminação. A proposta do método é obter valores que satisfaçam simultaneamente um conjunto de equações.

## O primeiro passo do método é isolar os termos para obter uma função para cada variável

![Isolar variaveis](https://github.com/anselmomendes/Implementacao-metodo-de-Gauss-Seidel/blob/master/imagens/001.jpg)

Cada variável recebe na parte superior um índice que marca o número de interações

![Cálculo do erro](https://github.com/anselmomendes/Implementacao-metodo-de-Gauss-Seidel/blob/master/imagens/002.jpg)

O erro é calculado usando o módulo do valor da variável atual menos o valor anterior dividido pelo atual como na fórmula acima.

Inicialmente as variáveis são incializadas com zero, a partir da primeira equação é usado o valor mais atual na equação seguinte.

![Iteraçãoes do método](https://github.com/anselmomendes/Implementacao-metodo-de-Gauss-Seidel/blob/master/imagens/003.jpg)

A imagem acima mostra como ocorre as substituições. O método continua até que o erro calculado seja aceitavel.

## Implementação do código

![Protótipos das funções](https://github.com/anselmomendes/Implementacao-metodo-de-Gauss-Seidel/blob/master/imagens/004.jpg)

A figura acima mostra o protótipo das funções implementadas, seus argumentos e retornos.

![interface do programa](https://github.com/anselmomendes/Implementacao-metodo-de-Gauss-Seidel/blob/master/imagens/005.jpg)

O programa possui uma interface terminal como a figura acima.

## Utilização do programa

![Matriz de entrada](https://github.com/anselmomendes/Implementacao-metodo-de-Gauss-Seidel/blob/master/imagens/007.jpg)

O uso do programa é feito após o usuário digitar o número de equações no sistema de equação e o erro máximo conforme a imagem acima.

![Dimensão e erro da matriz](https://github.com/anselmomendes/Implementacao-metodo-de-Gauss-Seidel/blob/master/imagens/006.jpg)

O programa deve retornar o tamanho da matriz que deve ser preenchida, as posições estão na figura acima.

![Matriz utilizada](https://github.com/anselmomendes/Implementacao-metodo-de-Gauss-Seidel/blob/master/imagens/009.jpg)

Logo após deve ser inserido cada um dos termos da matriz conforme citado anteriormente;


## Exemplo

![Alimentação da matriz](https://github.com/anselmomendes/Implementacao-metodo-de-Gauss-Seidel/blob/master/imagens/008.jpg)

A matriz acima será usada como exemplo.

O resultado da equação encontrado está presente abaixo.

![Resultado](https://github.com/anselmomendes/Implementacao-metodo-de-Gauss-Seidel/blob/master/imagens/010.jpg)

A diferença entre o resultado real  e o encontrado são:

-  3 -> 3,000806
- -2,5 -> -2,499738
-  7 -> 7,000207

## Melhorias

* Temos a intenção de usar alguma biblioteca gráfica para obter uma interface gráfica.
* Melhorar a escrita do código através de técnicas de cleanCode.

## Autores

- [Anselmo Mendes](https://github.com/anselmomendes)

- [Fernando Freire](https://github.com/fernandofreire01)
