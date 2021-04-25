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