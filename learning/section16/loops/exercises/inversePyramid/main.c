#include <stdio.h>

// Piramide invertida, dado um número de linhas n, ex n = 3
//1 2 3 -- 1
// 4 5  -- 2
//  6   -- 3


int main() {
    int rowNum = 5;
    int i = 1;
    for (int count = rowNum; count >= 1; count--) {

        for (int z = rowNum - 1; z > count - 1; z--) {
            putchar(' ');
        }
        for (int j = count; j >= 1; j--) {
            printf("* ");
            i++;
        }
        putchar('\n');

    }
    return 0;
}
