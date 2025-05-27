#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int grade, renda;
    // Se renda < 2000 e nota > 70, pé de meia aprovado
    // Se renda < 2000 ou nota > 70, pé de meia aprovado

    printf("Digite o valor da sua renda média: \n");
    scanf("%i", &renda);
    printf("Digite a sua nota: \n");
    scanf("%i", &grade);

    if (renda < 2000 && grade > 70) {
        printf("Pé-de-meia aprovado.\n");
    } else {
        printf("Pé-de-meia negado.\n");
    }

    printf("----------------------------------------\n");

    if (renda < 2000 || grade > 70) {
        printf("Pé-de-meia aprovado.\n");   
    } else {
        printf("Pé-de-meia negado.\n");
    }

    printf("----------------------------------------\n");

    if (!(renda < 2000 && grade > 70)) {
        printf("Pé-de-meia negado.\n");
    } else {
        printf("Pé-de-meia aprovado.\n");

    }
    

    printf("Pressione 'enter' para finalizar o programa...");
    getchar();
    getchar();
    return 0;
}