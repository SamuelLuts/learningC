#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int distance = 300, velocity = 80, timeH, timeMin;
    timeH = distance / velocity;
    timeMin = ((distance % velocity) / 10) * 6;

    printf("sua viagem durará %i horas e %i Minutos.\n", timeH, timeMin);

    printf("Pressione 'enter' para continuar...");
    getchar();
}