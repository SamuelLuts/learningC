#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int a, b, c;
    // Cria 3 vari�veis chamadas a, b e c
    int max, min;
    // Cria duas vari�veis chamadas max e min, Eles ter�o o valor m�ximo e m�nimo
    printf("Digite o primeiro n�mero: ");
    scanf("%i", &a);
    printf("Digite o segundo n�mero: ");
    scanf("%i", &b);
    printf("Digite o terceiro n�mero: ");
    scanf("%i", &c);

    // Pergunta e pega as perguntas do usu�rio

    max = a;
    min = b;

    // sup�e que a > c > b

    if (a < b) // Se a < b, ele atribui o m�ximo ao b e o m�nimo ao a
    {
        max = b;
        min = a;
    }
    if (max < c) // Se max < c, ele atribui o m�ximo ao c
    {
        max = c;
    }
    if (min > c) // Se min for maior que c, ele atribui c como valor m�nimo
    {
        min = c;
    }

    printf("M�ximo: %i.\n", max);
    printf("M�nimo: %i.\n", min);
    // Mostra na tela o valor m�ximo e m�nimo


    printf("Pressione 'enter' para finalizar o programa...");
    getchar();
    getchar();
    return 0;
}

// N�o consegui resolver, tive que ver a resolu��o do prof pra responder