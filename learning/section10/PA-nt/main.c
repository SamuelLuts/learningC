#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");

    float a1, an, r, n;
    // float ak, k;
    // an = a1 + (n - 1) * r

    printf("Insira o valor na primeira posi��o da progress�o aritm�tica: ");
    scanf("%f", &a1);

    /*
    printf("Insira o valor da primeira posi��o conhecida da progress�o aritm�tica: ");
    scanf("%f", &ak);

    printf("Insira o posi��o do valor informado anteriormente: ");
    scanf("%f", &k);
    */
    printf("Insira o valor da raz�o da progress�o aritm�tica: ");
    scanf("%f", &r);
    printf("Insira a posi��o desejada: ");
    scanf("%f", &n);

    an = a1 + (n - 1) * r;
    // an = ak + (n - k) * r;
    printf("O valor da en�sima posi��o � %.2f.\n", an);

    getchar();
    getchar();
}