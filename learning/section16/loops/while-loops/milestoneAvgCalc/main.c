#include <stdio.h>

int main()
{
    int num = 0, total = 0, div = 0;
    while (num != -1) {
        printf("Digite o próximo número (digite -1 para finalizar): \n");
        scanf("%d", &num);
        if (num >= 0) {
            total += num;
            div++;
        }
    }
    printf("Sua média final é de %d.\n", total / div);
}