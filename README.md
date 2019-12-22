# Implementação do metódo de numérico de Gauss-Seidel

Esse projeto foi desenvolvido por uma dupla de alunos da **UNIFESSPA** fruto de um trabalho de diciplina de **Calculo numerico** no qual foi necessario realizar a implementação do método utilizando uma linguagem livre. O projeto foi escirto em **C** e possui usando:
* TAD
* Segmentação em funções
* Alocação dinâmica
* Ponteiros.

## Metódo de Gauss-Seidel

São métodos iterativos ou de aproximação fornecem uma alternativa aos métodos de eliminação. A proposta do metódo é obter valores que satisfaçam simultaneamente um conjunto de equações.

## O primeiro passo do método isolar os termos para obter uma função para cada variavel

![Isolar variaveis](https://github.com/anselmomendes/Implementacao-metodo-de-Gauss-Seidel/blob/master/imagens/001.jpg)

Cada variavel recebe na parte superior um indice que marca o número de interações

![Calculo do erro](https://github.com/anselmomendes/Implementacao-metodo-de-Gauss-Seidel/blob/master/imagens/002.jpg)

O erro é calculado usando o modulo do valor da variavel atual menos o valor anterior dividido pelo atual como na formula acima.

Inicialmente as variaveis são incializadas com zero, a partir da primeira equação é usado o valor mais atual na equalção seguinte.

![Iteraçãoes do método](https://github.com/anselmomendes/Implementacao-metodo-de-Gauss-Seidel/blob/master/imagens/003.jpg)

A imagem acima mostra como ocorre as substituições. O método continua ate que o erro calculado seja aceitavel.

## Implementação do código

![Protótipos das funções](https://github.com/anselmomendes/Implementacao-metodo-de-Gauss-Seidel/blob/master/imagens/004.jpg)

A figura acima mostra o protótipo das funções implementadas, seus argumentos e retornos.

![interface do programa](https://github.com/anselmomendes/Implementacao-metodo-de-Gauss-Seidel/blob/master/imagens/005.jpg)

O programa possui uma interface terminal como a figura acima.

## Utilização do programa

![Matriz de entrada](https://github.com/anselmomendes/Implementacao-metodo-de-Gauss-Seidel/blob/master/imagens/007.jpg)

O uso do programa é feito apos o usuário digitar o numero de equações no sistema de equação e o erro maximo conforme a imagem acima.

![Dimenção e erro da matriz](https://github.com/anselmomendes/Implementacao-metodo-de-Gauss-Seidel/blob/master/imagens/006.jpg)

O programa deve retornar o tamanho da matriz que deve ser preenchida, as posições estão na figura acima.

![Matriz utilizada](https://github.com/anselmomendes/Implementacao-metodo-de-Gauss-Seidel/blob/master/imagens/009.jpg)

Logo apos deve ser inserido cada um dos termos da matriz conforme citado anteriormente;


## Exemplo

![Alimentação da matriz](https://github.com/anselmomendes/Implementacao-metodo-de-Gauss-Seidel/blob/master/imagens/008.jpg)

A matriz acima será usada como exemplo

O resultado da equação encontrado está presente abaixo.

![resultado](https://github.com/anselmomendes/Implementacao-metodo-de-Gauss-Seidel/blob/master/imagens/010.jpg)

A diferença entre o resultado real  e o encontrado são:

-  3 -> 2,97
- -2,5 ->-3,09
-  7 -> 6,98

* O software ainda ira passar por melhorias para obedecer todos os criterios dos erros, e não apenas de uma variavel.
* Temos a intenção de usar alguma biblioteca grafica para obter uma interface gráfica.
* Melhorar a escrita do código atraves de tecnicas de cleanCode.

## Autores

- [Anselmo Mendes](https://github.com/anselmomendes)

- [Fernando Freire](https://github.com/fernandofreire01)
