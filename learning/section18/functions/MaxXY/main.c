#include <stdio.h>

int numMax() {
    int a, b, c;
    printf("Enter three numbers: \n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    int max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    return max;
}

int main() {
    int max = numMax();
    printf("O maior número dentre os informados é %d\n", max);
    return 0;
}