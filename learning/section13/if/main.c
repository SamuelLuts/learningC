#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int nota;
    printf("Digite a sua nota: ");
    scanf("%i", &nota);

    if (nota >= 60)
    {
        printf("Parabéns, você passou.\n");
    }
    else
    {
        printf("Você foi reprovado, tente novamente.\n");
    }

    return 0;
}