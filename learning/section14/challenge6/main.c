// Faça um programa que pergunte ao usuário um número x de segundos, e transforme esses segundos em hrs, mins e segundos restantes;
// Deve utilizar o formato HH : MM : SS, ou seja, não poderá possuir unicamente 1 digito
// EX: 4000s = 1 : 6 : 40, errado, deve-se printar: 01 : 06 : 40


#include <stdio.h>

int main()
{
    int seconds, HH, MM, SS;

    printf("Digite a quantidade de segundos desejada: \n");
    scanf("%d", &seconds);

    HH = seconds / 3600;
    MM = (seconds - HH * 3600) / 60;
    SS = (seconds - HH * 3600 - MM * 60);

    if (HH < 10)
        printf("0");
    printf("%d : 400", HH);
    if (MM < 10)
        printf("0");
    printf("%d : ", MM);
    if (SS < 10)
        printf("0");
    printf("%d.\n", SS);

    // Copiei do prof;

    printf("Pressione 'enter' para finalizar o programa...");
    getchar();
    getchar();
    return 0;
}