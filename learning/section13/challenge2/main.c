#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num;
    printf("Digite o número que você deseja verificar se é par ou impar: ");
    scanf("%i", &num);

    if (num % 2 == 0) {
        printf("O número %i é par.\n", num);
    } else {
        printf("O número %i é ímpar.\n", num);
    }

    printf("Pressione 'enter' para finalizar o programa....");
    getchar();
    getchar();
    return 0;
}