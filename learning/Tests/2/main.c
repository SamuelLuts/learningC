#include <stdio.h>

int main() {
    int num;
    printf("Enter a number.\n");
    scanf("%d", &num);
    int result = num;
    for (int fact = num - 1; fact >= 1; fact--) {
        result *= fact;
        printf("%d\n", result);
    }
    printf("Result = %d.\n", result);
    return 0;
}