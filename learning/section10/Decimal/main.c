#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float num;

    printf("Digite o número flutuante: ");
    scanf("%f", &num);

    /* int numInt = (int)num;
    float numDec = num - numInt;
    */
    printf("%.2f", (float)num - (int)num);

    printf("Pressione 'enter' para continuar...");
    getchar();
}
