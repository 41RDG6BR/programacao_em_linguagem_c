# Curso de Programação em Linguagem C - Módulo #03

> Esta é a primeira parte da aula sobre função de saída de dados printf. Aprenderemos a usar a função printf para exibir dados na saída do programa, inclusive com o uso de especificadores de formatos e tipos de dados.
Aprenderemos a especificar tamanho de colunas e a precisão da exibição dos dados com printf.


_O que será mostrado nesse módulo?_

- Função printf - Exibindo dados na saída 

## Saída de dados - função printf()

Escreve ("imprime") dados formatados na tela do computador. Esses dados podem ou não estarem armazenados em variáveis.

> Sintaxe:

printf(string_controle_formatação, argumentos);

A string_controle_formatação descreve o formato do saída, e os outros argumentos (opcionais) correspondem a cada especificacao de conversao na string_controle_formatação.

A funçao printf pode, entre outras coisas:

- Arrendondar valores de ponto flutuante com um numero de casas decimais desejado;

- Alinha colunas de numeros um abaixo do outro;

- Alinha a direita ou a esquerda as saidas;

- Representar numeros de pontos flutuante em formato exponencial(notaçao cientifica);

- Inserir caracteres de texto em posicoes especificas;

- Mostrar qualquer tipo de dados em campos com tamanho e precisao fixos;

## Especificadores de conversao

| Especificador de conversao | Descrição                                                                             |
|----------------------------|---------------------------------------------------------------------------------------|
| d                          | Mostra um inteiro decimal com sinal                                                   |
| i                          | Mostra um interio com sinal. Iguais no printf, mas diferentes no scanf                |
| o                          | Mostra um inteiro octal sem sinal                                                     |
| u                          | Mostra um inteiro decimal sem sinal                                                   |
| x ou x                     | Mostra um inteiro hexadecimalsem sinal. x mostra caracteres a-f e X os caracteres A-F |
| h ou l                     | Colocado antes de um especificados inteiro para indica valor short (h) ou long (l)    |
| f                          | Mostra valor de ponto flutuante                                                       |
| e ou E                     | MOstra valor de ponto flutuante em notacao exponencial                                |
| L                          | Colocado antes de um especificador de ponto flutuante para indicar valor long double  |
| c                          | Imprimir caracteres individuais (char)                                                |
| s                          | Imprimir cadeia de carateres (string - ponteiro para char)                            |