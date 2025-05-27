#include <stdio.h>
/*
int maxDigit(int num) {
    int first = 1;
    int max;
    int temp = num;

    while (temp > 0) {
        int digit = temp % 10;
        temp /= 10;
        if (first) {
            max = digit;
            first = 0;
        }
        else if (digit > max) {
            max = digit;
        }
    }
    return max;
}
 */

// Analisar: EX 35 -> num % 10 == 5; num / 10 = 3;

void printMaxDigit(int num) {
    if (num > 9 && num < 100) {
        if (num % 10 >= num / 10) {
            printf("O maior dígito de %d é %d.\n", num, num % 10);
        } else {
            printf("O maior dígito de %d é %d.\n", num, num / 10);
        }
    } else {
        printf("O número não possui dois dígitos.\n");
    }
}

int main() {
    /* int num;
    printf("Enter a two-digits number: \n");
    scanf("%d", &num);

    if (num > 9 && num < 100) {
        int max = maxDigit(num);
        printf("O maior digito do número %d, é %d.\n", num, max);
    }
    else {
        printf("O número não possui dois dígitos.\n");
    } */
    int num;
    printf("Enter a number: \n");
    scanf("%d", &num);
    printMaxDigit(num);
    return 0;
}