#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    float nota1, nota2, media;
    printf("Digite sua primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite sua segunda nota: ");
    scanf("%f", &nota2);
    media = (nota1 + nota2)/2;

    printf("Sua média é %.2f", media);

    getchar();
    getchar();
}