#include <stdio.h>
#include <locale.h>
int main()
{

    setlocale(LC_ALL, "Portuguse");
    int idade, ano, nasc;
    char niver;
    /*
    printf("Sua idade � %d ", 16);
    printf("Estamos no ano de %d", 2025);
    printf("Voc� nasceu em %d", 2025 - 16 + 1);
    */

    printf("Digite o ano atual: ");
    scanf("%i", &ano);
    printf("Digite sua idade: ");
    scanf("%i", &idade);
    
    printf("Voc� fez anivers�rio no ano informado [Y/N]? ");
    scanf(" %c", &niver);

    if (niver == 'y' || niver == 'Y')
    {
        nasc = ano - idade;
        printf("Voc� nasceu no ano de %i", nasc);
    }
    if (niver == 'n' || niver == 'N')
    {
        nasc = ano - idade - 1;
        printf("Voc� nasceu no ano de %i", nasc);
    }

    getchar();
    getchar();
}