#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int Tseconds;
    printf("Digite o valor total de segundos: ");
    scanf("%i", &Tseconds);

    int Hours, minutes, Rseconds;
    Hours = Tseconds / 3600;
    minutes = (Tseconds - (Hours * 3600)) / 60;
    Rseconds = (Tseconds - (minutes * 60) - (Hours * 3600));

    printf("%i segundos significa: \n", Tseconds);
    printf("%i Horas.\n", Hours);
    printf("%i Minutes.\n", minutes);
    printf("%i Segundos.\n", Rseconds);

    printf("Pressione 'enter' para continuar...");
    getchar();
}
