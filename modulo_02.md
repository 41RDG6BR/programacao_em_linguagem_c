# Curso de Programação em Linguagem C - Módulo #02

> Vamos aprender a declarar variáveis em C e também a atribuir valores a elas com o operador de atribuição =. Usaremos como exemplos variáveis dos tipos int, float e char.

_O que será mostrado nesse módulo?_

- Declaração e Atribuição de Variáveis

## Variáveis

Uma variável é uma localização na memória RAM do computador que é utilizada para armazenar temporariamente os dados que são utilizados pelo programa.

A variáveias possuem alguma características, como:

- Identificação ("nome")
- Endereço
- Tipo
- Tamanho
- Valor("conteudo")

## Nomes de variáveis

- Podem ter um ou mais caracteres;
- O primeiro caractere sempre é uma letra;
- Não pode ter espaços em branco;
- Não podem ser usados símbolos, além do underline;
- Podem ser usados números;
- Não podem ser palavras reservadas da linguagem;

Palavras reservadas da linguagem C (padão ANSI)

| auto     | double | int      | struct   |
|----------|--------|----------|----------|
| break    | else   | long     | switch   |
| case     | enum   | register | typedef  |
| char     | extern | return   | union    |
| const    | float  | short    | unsigned |
| continue | for    | signed   | void     |
| default  | goto   | sizeof   | volatile |
| do       | if     | static   | while    |

## Declaração de variáveis em C

Para que um variável possa ser usada em um programa, ela deve primeiro ser declarada, para que seja reservado espaço na memória para armazenamento de seus dados:

> Tipo-dados nomes-variáveis

As variáveis devem ser declaradas no início do programa (mas em alguns casos podem ser declaradas em outros partes do programa)

Exemplos de declarações

int a, b, c;
char letra;
float valor, aumento;
double patrimonio;
int x = 0;
float salario, juros = 0.08;

Atribuição de valores para variáveis

Para atrigbuir um valor para uma variável, use o comando de atribuição: =

Em C é possivel realizar atribuiçao múltipla, na qula um valor é atribuido a uma variável e esta variável é atribuida a outra, em uma única linha de comandos:

y = x = 10;