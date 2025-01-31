#include <stdio.h>

int main(){
    int idade;
    float altura;
    char opcao;

    printf("Olá, mundo!\n");


    printf("Digite sua idade: \n");
    scanf("%d", &idade);
    printf("Digite sua altura: \n");
    scanf("%f", &altura);
    printf("Digite a opção: \n");
    scanf(" %c", &opcao);

    printf("\nIdade: %d\n", idade);
    printf("Altura: %.2f\n", altura);
    printf("Opção: %c\n\n", opcao);
}
