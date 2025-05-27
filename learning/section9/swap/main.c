#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int a, b;
    printf("Digite o primeiro valor: \n");
    scanf("%i", &a);
    printf("Digite o segundo valor: \n");
    scanf("%i", &b);
    printf("a = %i.\n", a);
    printf("b = %i.\n", b);

    int temp = a;
    a = b;
    b = temp;
    printf("--------------------\n");
    printf("a = %i.\n", a);
    printf("b = %i.\n", b);

    getchar();
    getchar();
}