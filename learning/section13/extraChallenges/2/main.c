#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int lA, lB, lC;

    printf("Digite o valor do primeiro lado: ");
    scanf("%i", &lA);
    printf("Digite o valor do segundo lado: ");
    scanf("%i", &lB);
    printf("Digite o valor do terceiro lado: ");
    scanf("%i", &lC);

    if (lA + lB > lC)
    {
        if (lA + lC > lB)
        {
            if (lB + lC > lA)
            {
                printf("O triangulo é válido.\n");
            }
            else
            {
                printf("O triangulo não é válido pois %i + %i <= %i.\n", lB, lC, lA);
            }
        }
        else
        {
            printf("O triangulo não é válido pois %i + %i <= %i.\n", lA, lC, lB);
        }
    }
    else
    {
        printf("O triangulo não é válido pois %i + %i <= %i.\n", lA, lB, lC);
    }

    printf("Pressione 'enter' para continuar...");
    getchar();
    getchar();
}