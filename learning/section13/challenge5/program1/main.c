#include <stdio.h>

int main()
{
    // Sorry for bad english
    printf("Theses numbers are equals?");

    int num1, num2;

    printf("Enter the first number: \n");
    scanf("%i", &num1);
    printf("Enter the second number: \n");
    scanf("%i", &num2);

    if (num1 == num2) {
        printf("Equal");
    } else {
        printf("Not equal");
    }

    //or

    printf("%s.\n", (num1 == num2)?("Equal"):("Not equals"));
    
}