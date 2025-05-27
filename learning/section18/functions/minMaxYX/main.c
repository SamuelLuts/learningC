#include <stdio.h>

void numMax(int num1, int num2) {
    printf("Max: %d\n", (num1 > num2) ? (num1) : (num2));
    printf("Min: %d\n", (num1 < num2) ? (num1) : (num2));
}

int main() {
    int num1, num2;
    printf("Enter two numbers: \n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    numMax(num1,num2);
    return 0;
}