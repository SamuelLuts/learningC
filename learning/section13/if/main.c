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
        printf("Parab�ns, voc� passou.\n");
    }
    else
    {
        printf("Voc� foi reprovado, tente novamente.\n");
    }

    return 0;
}