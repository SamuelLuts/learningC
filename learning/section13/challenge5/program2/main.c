#include <stdio.h>

int main()
{
    // Sorry for bad english
    int num1, num2, num3;

    printf("Enter your first number: \n");
    scanf("%i", &num1);
    printf("Enter your second number: \n");
    scanf("%i", &num2);
    printf("Enter your thirdy number: \n");
    scanf("%i", &num3);

    if (num1 != num2) {
        printf("Not equal.\n");
    } else {
        if (num2 != num3) {
            printf("Not equal.\n");
        } else {
            printf("Equal.\n");
        }
    }

    // or

    printf("%s.\n", (num1 != num2)?("Not equal"):(num2 != num3)?("Not equal"):("Equal"));
    return 0;
}