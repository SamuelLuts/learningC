#include <stdio.h>

int main()
{
    int num;
    printf("Digite um número: \n");
    scanf("%d", &num);
    int result = 0;
    for (int i = 1 ; i <= num; i++) {
        result += i;
        if (i < num) {
            printf("%d + ", i);
        } else {
            printf("%d = %d", i, result);
        }
    }
    return 0;
}