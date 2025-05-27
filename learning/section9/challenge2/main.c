#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float b, h, area;
    printf("Digite a base do retângulo: ");
    scanf("%f", &b);
    printf("Digite a altura do retângulo: ");
    scanf("%f", &h);
    area = b * h;
    printf("A área do triangulo informado é %.2f", area);
}