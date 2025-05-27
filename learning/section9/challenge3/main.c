#include <stdio.h>

int main()
{

    float b, h, per;
    printf("Enter the measurement of the base of the rectangle");
    scanf("%f", &b);
    printf("Enter the measurement of the height of the rectangle: ");
    scanf("%f", &h);
    per = 2*b + 2*h;
    printf("perimeter of the given rectangle is %.2f", per);
}