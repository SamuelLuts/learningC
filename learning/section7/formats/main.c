#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");

    // Existem diversos tipos de especificadores de formato, os principais s�o:
    /*
    %d, %i ? Para n�mero inteiros
    %f ? Para n�mero flutuantes/Com casas decimais
    %c ? Para letras �nicas
    %s ? Para senten�as, palavras e conjunto de letras
    */
    // Num printf, para p�r algo dentro de um formatador, � necess�rio por dentro do printf e digitar o formatador desejado, ap�s isso, no fim da string, separe com um , e digite o valor desejado
    // EX:
    printf("Sua nota m�dia � %.2f.\n", 71.4);
    printf("Sua idade � %d.\n", 16);
    printf("Sua letra favorita � %c.\n", 'S');
    printf("Seu nome � %s.\n", "Samuel");

    getchar();
    getchar();
}