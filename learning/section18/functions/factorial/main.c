#include <stdio.h>

int factorial(int num) {
    int result = 1;
    for (int i = 1; i <= num; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int num;
    printf("Enter a number for his factorial: \n");
    scanf("%d", &num);
    int fact = factorial(num);
    printf("The factorial of %d is %d.\n", num, fact);
    return 0;
}