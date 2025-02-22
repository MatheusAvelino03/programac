#include <stdio.h>

int main()
{
    //Entrada de dados "scanf";
    int idade;
    float altura;
    char opcao;
    char nome[20];

    printf("Digite sua idade: ");
    //Usar especificador de formato;
    scanf("%d", &idade);
    printf("A idade é: %d\n", idade);

    printf("Digite sua altura: ");
    scanf("%f", &altura);
    printf("Sua altura é: %.2f\n", altura);

    /*
    O nome composto, não é apresentado, quando ao fial do first name, é colocado um "espaço";
    a linguagem interpreta como uma finalização e não apresenta o last name em seguida.;

    SEMPRE O ESPAÇO É CONSIDERADO COMO UM CARACTERE
    */
    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("Seu nome é: %s\n", nome);

    printf("Digite seu nome: ");
    //Para com ler a entrada foi colocado um "espaço antes", da formatação de dedos;
    //Para que pudesse dar continuidade no programa;
    scanf(" %c", &opcao);
    printf("Seu nome é: %c", opcao);


}