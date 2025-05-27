#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    double celsius, fahrenheit;

    printf("Digite o valor da sua temperatura em Celsius: \n");
    scanf("%lf", &celsius);

    fahrenheit = celsius * 1.8 + 32;

    printf("A temperatura informada, de %.2lf\xB0 Celsius é de %.2lf\xB0 Fahrenheit.\n", celsius, fahrenheit);

    printf("Digite o valor da sua temperatura em fahrenheit: \n");
    scanf("%lf", &fahrenheit);

    celsius = (5 * fahrenheit - 160) / 9;

    printf("A temperatura de %.2lf\xB0 Fahrenheit é igual a %.2lf\xB0 Celsius.\n", fahrenheit, celsius);

    getchar();
    getchar();
}