#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num;
    printf("Digite o n�mero que voc� deseja verificar se � par ou impar: ");
    scanf("%i", &num);

    if (num % 2 == 0) {
        printf("O n�mero %i � par.\n", num);
    } else {
        printf("O n�mero %i � �mpar.\n", num);
    }

    printf("Pressione 'enter' para finalizar o programa....");
    getchar();
    getchar();
    return 0;
}