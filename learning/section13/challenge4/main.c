#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int a, b, c;
    // Cria 3 variáveis chamadas a, b e c
    int max, min;
    // Cria duas variáveis chamadas max e min, Eles terão o valor máximo e mínimo
    printf("Digite o primeiro número: ");
    scanf("%i", &a);
    printf("Digite o segundo número: ");
    scanf("%i", &b);
    printf("Digite o terceiro número: ");
    scanf("%i", &c);

    // Pergunta e pega as perguntas do usuário

    max = a;
    min = b;

    // supõe que a > c > b

    if (a < b) // Se a < b, ele atribui o máximo ao b e o mínimo ao a
    {
        max = b;
        min = a;
    }
    if (max < c) // Se max < c, ele atribui o máximo ao c
    {
        max = c;
    }
    if (min > c) // Se min for maior que c, ele atribui c como valor mínimo
    {
        min = c;
    }

    printf("Máximo: %i.\n", max);
    printf("Mínimo: %i.\n", min);
    // Mostra na tela o valor máximo e mínimo


    printf("Pressione 'enter' para finalizar o programa...");
    getchar();
    getchar();
    return 0;
}

// Não consegui resolver, tive que ver a resolução do prof pra responder