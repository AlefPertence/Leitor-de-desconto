/* Exercício 3: Calcular Desconto com Base no Código do Produto
Faça um programa que pede ao usuário para inserir o código de um produto(1 a 5) e calcula o preço com desconto :
Código 1 : 10 % de desconto
Código 2 : 15 % de desconto
Código 3 : 20 % de desconto
Código 4 : 25 % de desconto
Código 5 : 30 % de desconto
O usuário deve digitar o preço do produto e o código.O programa exibe o preço final com o desconto aplicado.*/


#include <stdio.h>;

int main() {

    int cod;
    float preco, desconto;


    printf("Digite o valor do seu produto: ");
    scanf_s("%f", &preco);

    printf("Agora digite qual o seu codigo para saber qual e o seu desconto: \n 1 - 10 porcento de desconto; \n 2 - 15 porcento de desconto; \n 3 - 20 porcento de desconto; \n 4 - 25 porcento de desconto; \n 5 - 30 porcento de desconto. \n Selecione uma opcao: ");
    scanf_s("%d", &cod);
    switch (cod)
    {
    case(1): printf("voce o seu produto com 10 porcento de desconto sera de: ");

        desconto = preco * 0.1;

        printf(" %.2f R$", desconto);
        break;

    case(2):
        printf("voce o seu produto com 15 porcento de desconto sera de: ");

        desconto = preco * 0.15;

        printf(" %.2f", desconto);
        break;

    case(3):
        printf("voce o seu produto com 20 porcento de desconto sera de: ");

        desconto = preco * 0.2;

        printf(" %.2f", desconto);
        break;
    case(4):
        printf("voce o seu produto com 25 porcento de desconto sera de: ");

        desconto = preco * 0.25;

        printf(" %.2f", desconto);
        break;

    case(5):
        printf("voce o seu produto com 30 porcento de desconto sera de: ");

        desconto = preco * 0.3;

        printf(" %.2f", desconto);
        break;


    default:
        printf("opcao invalida");
        break;
    }




}