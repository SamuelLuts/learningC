#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int a, b, c;
    int max, med, min;

    printf("Digite o primeiro número: ");
    scanf("%i", &a);
    printf("Digite o segundo número: ");
    scanf("%i", &b);
    printf("Digite o terceiro número: ");
    scanf("%i", &c);

    max = a;
    med = b;
    min = c;

    if (max < b)
    {
        max = b;
        med = a;
    }
    if (max < c)
    {
        max = c;
        med = b;
        min = a;
    }
    /*
    if (min > b)
    {
        min = b;
        med = a;
    }
    */
    if (min > med)
    {
        int temp = med;
        med = min;
        min = temp;
    }

    printf("%i, %i, %i.\n", max, med, min);

    printf("Pressione 'enter' para finalizar o programa...");
    getchar();
    getchar();
    return 0;
}