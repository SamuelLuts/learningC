#include <stdio.h>

int main() {
    int num = 100;
    int result1 = 0, result2 = 0;
    int iThree, iFive;

    for (int i = 3; i <= num; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            result1 += i;
        }
    }
    printf("blablabla %d.\n", result1);
    // Eficiente
    for (iThree = 3, iFive = 5; iThree <= num && iFive <= num; iThree += 3, iFive += 5) {
        
        printf("%d\n", iThree);
        printf("%d\n", iFive);
        result2 += iThree + iFive;
    }
    printf("o resultado da sua soma é: %d\n", result2);
    return 0;
}