#include <stdio.h>
// #include <locale.h>
int main()
{
    // setlocale(LC_ALL, "Portuguese");
    int num;

    printf("Digite seu número: .\n");
    scanf("%i", &num);

    // verC = num % 1000;
    // Brizei aq, tava pensando numa condição de verC <= 999 && verC >= 100

    if ((num <= 999 && num >= 100) || (num >= -999 && num <= -10))
    {
        printf("Triple-digit.\n");
    }
    else if ((num <= 99 && num >= 10) || (num >= -99 && num <= -10))
    {
        printf("Double-digit.\n");
    } else {
        printf("Neither");
    }

    // or

    printf("%s.\n", ((num <= 999 && num >= 100)) ? ("Triple-digit") : ("Double-digit"));

    printf("Pressione 'enter' para finalizar o programa...");
    getchar();
    getchar();
    return 0;
}