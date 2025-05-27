#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    float a1, an, st;
    int n;

    printf("Digite o valor da primeira posição da PA: ");
    scanf("%f", &a1);
    printf("Digite o valor da última posição: ");
    scanf("%f", &an);
    printf("Digite qual a posição do último valor: ");
    scanf("%i", &n);

    st = ((a1 + an) * n) / 2;

    printf("A soma total de todos os termos da PA informada é %.2f.\n", st);

    printf("Pressione 'enter' para continuar...");
    getchar();
}