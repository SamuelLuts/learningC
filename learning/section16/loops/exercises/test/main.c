#include <stdio.h>

int main() {
    int arraySize = 5;
    int num[arraySize];
    int numBigger, numMinor;
    for (int i = 0; i < arraySize; i++) {
        printf("Enter a number: ");
        scanf("%d", &num[i]);
    }
    int first = 1;
    for (int i = 0; i < arraySize; i++) {
        if (first) {
            numBigger = num[i];
            numMinor = num[i];
            first = 0;

        }
        else if (num[i] > numBigger) {
            numBigger = num[i];
        } else if (num[i] < numMinor) {
            numMinor = num[i];
        }
    }

    printf("Maior número:  %d\n", numBigger);
    printf("Menor número: %d\n", numMinor);
    return 0;
}