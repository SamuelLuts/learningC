#include <stdio.h>

// n = 3
// 1
// 2 2
// 3 3 3
// ....

int main()
{
    int b;
    printf("Digite o valor da base: ");
    scanf("%d", &b);
    for (int i = 1; i <= b; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", i);
        }
        putchar('\n');
    }
    
    return 0;
}