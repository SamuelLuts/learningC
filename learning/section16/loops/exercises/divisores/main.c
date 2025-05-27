#include <stdio.h>
#include "omg.h"
// Criar um programa que descubra quais são os divisores de um número n, menor que n;

int main()
{
    char choice;
    int num;
    printf("Digite um número: \n");
    scanf("%d", &num);

    int result = perfectCheck(num);
    printf("A soma dos divisores de %d menor que ele mesmo é %d, ", num, result);
    if (result != num) {
        printf("Ou seja, ele não é perfeito.\n");
    } else {
        printf("Ou seja, ele é perfeito.\n");
    }
    printf("Deseja ver quais são os divisores de %d [Y/N]? \n", num);
    scanf(" %c", &choice);
    if (choice == 'y' || choice == 'Y') {
        fatorizar(num);
    } 
    putchar('\n');
    printf("Programa finalizado.\n");
}