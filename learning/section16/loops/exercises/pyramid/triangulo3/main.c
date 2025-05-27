#include <stdio.h>

int main() {
    int rowNum = 3;
    int i = 1;
    for (int count = 1; count <= rowNum; count++) {
        for (int space = rowNum - 1; space >= count; space--) {
            putchar(' ');
        }
        for (int j = 1; j <= count; j++) {
            printf("%d ", i);
            i++;
        }
        putchar('\n');
    }
}