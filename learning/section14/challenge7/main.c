// Um programa q pegue 3 inteiros e, caso os pares seja divisível um pelo outro, printar divisível;
// EX: 3, 36, 72 é divisível
// EX 2, 4, 7 não é divisivel
// EX: 16, 4, 8 é divisível

#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Digite o primeiro número: \n");
    scanf("%d", &a);
    printf("Digite o segundo número: \n");
    scanf("%d", &b);
    printf("Digite o terceiro número: \n");
    scanf("%d", &c);

    if ((a % b == 0 || b % a == 0) && (a % c == 0 || c % a == 0) && (b % c == 0 || c % b == 0)) {
        printf("Divisível.\n");
    } else {
        printf("Não divisível.\n");
    }

}