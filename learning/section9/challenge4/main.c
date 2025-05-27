#include <stdio.h>

int main()
{
    int nota1, nota2, nota3;
    double media;
    printf("Digite sua primeira nota: ");
    scanf("%i", &nota1);
    printf("Digite sua segunda nota: ");
    scanf("%i", &nota2);
    printf("Digite sua terceira nota : ");
    scanf("%i", &nota3);
    // media = (nota1 + nota2 + (float)nota3) / 3; // or
    media = (nota1 + nota2 + nota3) / 3.0; // mudou o divisor de 3 (inteiro) para 3.0 (flutuante/decimal)
    printf("Sua média é %lf", media);

    getchar();
    getchar();
}