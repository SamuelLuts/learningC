#include <stdio.h>

float averageBtw3(float a, float b, float c) {
    
    return (a + b + c) / 3;
}

int main() {
    int a, b, c;
    printf("Enter three numbers: \n");
    scanf("%d%d%d", &a, &b, &c);
    float average = averageBtw3(a, b, c);
    printf("The average between these three numbers is %.2f.\n", average);
}