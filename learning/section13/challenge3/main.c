#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float num1, num2;

    printf("Digite o primeiro número decimal: ");
    scanf("%f", &num1);
    printf("Digite o segundo número decimal: ");
    scanf("%f", &num2);

    if (num1 > num2)
    {
        printf("Máximo: %f.\n", num1);
        printf("Mínimo: %f.\n", num2);
    }
    if (num1 == num2)
    {
        printf("Ambos os números resultam em %f.\n", num1);
    }
    if (num1 < num2)
    {
        printf("Máximo: %f.\n", num2);
        printf("Mínimo: %f.\n", num1);
    }

    printf("Digite 'enter' para finalizar o programa...");
    getchar();
    getchar();
    return 0;
}