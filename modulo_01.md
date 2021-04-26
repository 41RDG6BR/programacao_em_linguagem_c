# Curso de Programação em Linguagem C - Módulo #01

> Neste vídeo falaremos sobre o que são tipos de dados (Data Types) e descreveremos sucintamente os tipos de dados básicos mais comuns em C, como int, long, short, float, double e char.

_O que será mostrado nesse módulo?_

- Tipos Básicos (int, float, char, etc.)
- Tipos de Enumeração
- Tipo void
- Tipos Devirados ( structs, arrays, ponteiros, unions, etc.)

## Tipos Básicos

Consistem em tipos aritméticos inteiros e de ponto-flutuante. Veja abaixo os tipos inteiros:

|      Tipo      | Tamanho |        Faixa de valores        |
|:--------------:|:-------:|:------------------------------:|
|      char      |  1 byte |           -128 a 127           |
|  unsigned char |  1 byte |            0 to 255            |
|   signed char  |  1 byte |           -128 to 127          |
|       int      | 4 bytes | -2.147.483.648 a 2.147.483.647 |
|  unsigned int  | 4 bytes |        0 a 4.294.967.295       |
|      short     | 2 bytes |        -32,768 a 32,767        |
| unsigned shot  | 2 bytes |           0 to 65,535          |
|      long      | 4 bytes | -2.147.483.648 a 2.147.483.647 |
|  unsigned long | 4 bytes |        0 a 4.294.967.295       |

## Tipos Básicos - Ponto Flutuante

Veja abaixo os tipos de ponto-flutuante disponíveis em C:

|     Tipo    |  Tamanho |   Faixa de valores   |      Precisão     |
|:-----------:|:--------:|:--------------------:|:-----------------:|
|    float    |  4 bytes |   3.4E-38 a 3.4E+38  |  6 casas decimais |
|    double   |  8 bytes |  1.7E-308 a 1.7E+308 | 15 casas decimais |
| long double | 12 bytes | 3.4-4932 a 1.1E+4932 | 19 casas decimais |

## Tipo lógico

Não há um tipo lógico na limguagem C original, porém apartir do padrão ISO C99 é possível usar o tipo (mais precisamente, macro) bool.

No geral, em , o valor inteiro 1 pode ser considerado como valor lógico true(verdadeiro) e o inteiro 0 como valor lógico false(falso).
Na verdade, qualquer valor diferente de 0 será tratado como verdadeiro.

Para usarmos o tipo lógico book precisamos incluir a bibliotaca stdbool.h no código do programa.
Caso usemos uma versão mais antiga do C, podemos "criar" um tipo lógico com o seguinte código:

typedef enum {false=0, true=1}logico;

## Tipo caractere (char)

Já os tipos literais são tratados em C como valores numéricos, e não como literais. Cada caractere possui um correspondente numérico, obedecendo geralmente á tabela ASCII do caracteres.
Em C temos o tipo char para representar um caractere literal. Seu tamanho é de 1 byte (8 bits), possuindo então valores entre 0 e 255.

Caso precisemos armazenar uma cadeiade caracteres(string), usamos arrays do tipo char. Um caractere nulo, representado por \0, sempre indicará o final da cadeia - e ele conta no tamanho total da cadeia.