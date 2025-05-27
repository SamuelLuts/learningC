#include <stdio.h>

int main()
{
    printf("We have %d coins in the bank\n", 100);
    // "We have 100 coins in the bank"
    printf("We have %f coins in the bank\n", 125.7);
    // "We have 125.700000000 coins in the bank"
    printf("Year = %d\n", 2020);
    // Year = 2020
    printf("Your average grade is: %f \n", 95.13);
    // Your average grade is: 95.1300000000
    printf("num1 = %d, num2 = %d, sum = %d \n", 5, 7, 5 + 7);
    // num1 = 5, num2 = 7, sum = 12
    printf("num1 = %f, num2 = %f, sum = %f \n", 5.2, 7.3, 9.5);
    // num1 = 5.200000, num2 = 7.3000000, sum = 9.50000000
    printf("num1 = %d, num2 = %d, sub = %d \n", 5, 3, 5 - 3);
    // num1 = 5, num2 = 3, sub = 2
    printf("a = %d, b = %d, sum = a + b = %d \n", 3, 5, 3 + 5);
    // a = 3, b = 5, sum = a + b = 8
    printf("a = %d, b = %d, sum = %d + %d = %d \n", 3, 5, 3, 5, 3 + 5);
    // a = 3, b = 5, sum = 3 + 5 = 8
    printf("a = %d, b = %d, sum = a + b = %d + %d = %d \n", 3, 5, 3, 5, 3 + 5);
    // a = 3, b = 5, sum = a + b = 3 + 5 = 8
    return 0;
}