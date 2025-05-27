#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Enter your first number: ");
    scanf("%i", &num1);
    printf("Enter your second number: ");
    scanf("%i", &num2);

    printf("%s.\n", (num1 == num2)?("True"):("False"));

    // or

    if (num1 == num2) {
        printf("True.\n");
    } else {
        printf("False.\n");
    }
    printf("Pressione 'enter' para finalizar o programa...");
    getchar();
    getchar();
    return 0;
}