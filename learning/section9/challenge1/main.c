#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int ano, idade, nasc;
    printf("Digite o �ltimo ano que voc� fez anivers�rio: ");
    scanf("%i", &ano);
    printf("Digite sua idade: ");
    scanf("%i", &idade);
    nasc = ano - idade;
    printf("Seu ano de nascimento � %i", nasc);

    getchar();
    getchar();
}