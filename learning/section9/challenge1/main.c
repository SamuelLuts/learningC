#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int ano, idade, nasc;
    printf("Digite o último ano que você fez aniversário: ");
    scanf("%i", &ano);
    printf("Digite sua idade: ");
    scanf("%i", &idade);
    nasc = ano - idade;
    printf("Seu ano de nascimento é %i", nasc);

    getchar();
    getchar();
}