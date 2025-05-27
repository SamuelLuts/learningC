#include <stdio.h>

int main()
{

    // 1 para positivo, -1 para negativo, 0 para 0

    int num;
    printf("Enter your number: \n");
    scanf("%i", &num);

    if (num > 0) {
        printf("1.\n");
    } else if (num < 0) {
        printf("-1.\n");
    } else {
        printf("0.\n");
    }

    // or

    printf("%i.\n", (num > 0)?(1):(num < 0)?(-1):(0));
    
}