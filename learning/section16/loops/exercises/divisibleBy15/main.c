#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: \n");
    scanf("%d", &num);
    unsigned long int sum = 0;
    for (int i = 15; i <= num; i += 15) {
        printf("%d\n", i);
        sum += i;
    }
    printf("A soma de todos os números múltiplos por 3 e 5 é %ld.\n", sum);
    return 0;
}