#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float b, h, area;
    printf("Digite a base do ret�ngulo: ");
    scanf("%f", &b);
    printf("Digite a altura do ret�ngulo: ");
    scanf("%f", &h);
    area = b * h;
    printf("A �rea do triangulo informado � %.2f", area);
}