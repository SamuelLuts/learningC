#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    float a1, an, st;
    int n;

    printf("Digite o valor da primeira posi��o da PA: ");
    scanf("%f", &a1);
    printf("Digite o valor da �ltima posi��o: ");
    scanf("%f", &an);
    printf("Digite qual a posi��o do �ltimo valor: ");
    scanf("%i", &n);

    st = ((a1 + an) * n) / 2;

    printf("A soma total de todos os termos da PA informada � %.2f.\n", st);

    printf("Pressione 'enter' para continuar...");
    getchar();
}