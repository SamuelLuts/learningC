#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");

    // Existem diversos tipos de especificadores de formato, os principais são:
    /*
    %d, %i ? Para número inteiros
    %f ? Para número flutuantes/Com casas decimais
    %c ? Para letras únicas
    %s ? Para sentenças, palavras e conjunto de letras
    */
    // Num printf, para pôr algo dentro de um formatador, é necessário por dentro do printf e digitar o formatador desejado, após isso, no fim da string, separe com um , e digite o valor desejado
    // EX:
    printf("Sua nota média é %.2f.\n", 71.4);
    printf("Sua idade é %d.\n", 16);
    printf("Sua letra favorita é %c.\n", 'S');
    printf("Seu nome é %s.\n", "Samuel");

    getchar();
    getchar();
}