#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("Soma: %d + %d = %d.\n", 5, 2, 5 + 2);
    printf("Subtração: %d - %d = %d.\n", 5, 2, 5 - 2);
    printf("Multiplicação: %d + %d = %d.\n",5, 2, 5*2 );
    printf("Divisão: %d + %d = %d.\n", 5, 2, 5 / 2);
    printf("Resto: %d %% %d = %d.\n", 5, 2, 5 % 2);
    getchar();
    getchar();

    
}