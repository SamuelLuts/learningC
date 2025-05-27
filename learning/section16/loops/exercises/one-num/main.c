#include <stdio.h>

// Um programa que pegue um número e faça:
// ex: num = 5
// 1, 2, 3, 4, 5.
// 5, 4, 3, 2, 1.

int main()
{
    int num;
    printf("Digite um número: \n");
    scanf("%d", &num);
    for (int count = 1; count <= num; count++)
    {
        // Ordem crescente
        if (count < num)
        {
            printf("%d, ", count);
        }
        else
        {
            printf("%d.", count);
        }
    }
    printf("\n");
    for (int count = num; count >= 1; count--) {
        if (count > 1) {
            printf("%d, ", count);
        } else {
            printf("%d.", count);
        }
    }
    return 0;
}