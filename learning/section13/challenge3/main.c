#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float num1, num2;

    printf("Digite o primeiro n�mero decimal: ");
    scanf("%f", &num1);
    printf("Digite o segundo n�mero decimal: ");
    scanf("%f", &num2);

    if (num1 > num2)
    {
        printf("M�ximo: %f.\n", num1);
        printf("M�nimo: %f.\n", num2);
    }
    if (num1 == num2)
    {
        printf("Ambos os n�meros resultam em %f.\n", num1);
    }
    if (num1 < num2)
    {
        printf("M�ximo: %f.\n", num2);
        printf("M�nimo: %f.\n", num1);
    }

    printf("Digite 'enter' para finalizar o programa...");
    getchar();
    getchar();
    return 0;
}