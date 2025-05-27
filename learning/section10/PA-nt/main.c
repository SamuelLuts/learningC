#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");

    float a1, an, r, n;
    // float ak, k;
    // an = a1 + (n - 1) * r

    printf("Insira o valor na primeira posição da progressão aritmética: ");
    scanf("%f", &a1);

    /*
    printf("Insira o valor da primeira posição conhecida da progressão aritmética: ");
    scanf("%f", &ak);

    printf("Insira o posição do valor informado anteriormente: ");
    scanf("%f", &k);
    */
    printf("Insira o valor da razão da progressão aritmética: ");
    scanf("%f", &r);
    printf("Insira a posição desejada: ");
    scanf("%f", &n);

    an = a1 + (n - 1) * r;
    // an = ak + (n - k) * r;
    printf("O valor da enésima posição é %.2f.\n", an);

    getchar();
    getchar();
}