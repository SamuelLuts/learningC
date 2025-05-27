#include <stdio.h>

int main()
{
    float a, b, temp;
    a = 10.5;
    b = 21.3;
    printf("a = %.2f.\n", a);
    printf("b = %.2f.\n", b);

    temp = a;
    a = b;
    b = temp;
    printf("a = %.2f.\n", a);
    printf("b = %.2f.\n", b);
    
}