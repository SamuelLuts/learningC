#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("Soma: %d + %d = %d.\n", 5, 2, 5 + 2);
    printf("Subtra��o: %d - %d = %d.\n", 5, 2, 5 - 2);
    printf("Multiplica��o: %d + %d = %d.\n",5, 2, 5*2 );
    printf("Divis�o: %d + %d = %d.\n", 5, 2, 5 / 2);
    printf("Resto: %d %% %d = %d.\n", 5, 2, 5 % 2);
    getchar();
    getchar();

    
}