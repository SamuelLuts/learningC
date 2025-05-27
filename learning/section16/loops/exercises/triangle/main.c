#include <stdio.h>

int main()
{
    int b;
    printf("Digite o valor da base do triangulo: \n");
    scanf("%d", &b);
    for (int i = 1; i <= b; i++) {
        for (int j = 1; j<=i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}