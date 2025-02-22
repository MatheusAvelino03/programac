#include <stdio.h>

int main()
{

    // Sempre inicialiar a variavél dando valores a ela;

    // não pode começar a variavél com número;
    // Não pode usar palavras reservadas - pode-se dar conflitos com a compilação;
    //  "=" é um sinal de atribuição de valores para a varivél;
    int idade = 24;
    int opcao = 34;
    //"float"- valores menores
    float altura = 1.75;
    //"char"- para pode escrever um conjuntos de carateres, tem que definir um array"[]";
    //"Array [] - sempre definir o tamanho dos dados que iram ser precisos usar"
    char letra = 'A';
    char nome[20] = "Matheus Avelino";
    //"double" - armazena valores maiores;
    double comprimento;

    idade = 25;

    printf("Idade do %s é: %d\n ", nome, idade);
    printf("A altura é :%e\n ", altura);
    printf("A opção é :%c\n ", letra);


    //para cada variavél existe um especificador de formato
    /* O que pode ser feito no printf(''texto com formatação'', variavel1, variavel2, ...);
//
//
    //ESPECIFICADOR DE FORMATO
%d: Imprime um inteiro no formato decimal.
 
%i: Equivalente a %d.
 
%f: Imprime um número de ponto flutuante no formato padrão. #EU POSSO COLOCAR %.2f para
espesificar a quantidade de casas decimais;
 
%e: Imprime um número de ponto flutuante na notação científica.
 
%c: Imprime um único caractere.
 
%s: Imprime uma cadeia (string) de caracteres.
    
    */


}