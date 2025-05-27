#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num1, num2;
    printf("Digite dois números: ");
    scanf("%i", &num1);
    scanf("%i", &num2);

    if (num1 > num2)
    {
        printf("O número %i.\n", num1);
    }
    else
    {
        printf("O número %i", num2);
    }
    printf("Pressione 'enter' para finalizar o programa...");
    getchar();
    return 0;
}