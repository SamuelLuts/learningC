#include <stdio.h>

int main()
{
    // Sorry for bad english
    printf("Ascending or Descending?");
    int num;

    printf("Enter a three digit number: ");
    scanf("%i", &num);

    if (num % 10 > ((num % 100) - (num % 10)) / 10 && ((num % 100) - (num % 10)) / 10 > ((num % 1000) - ((num % 100) + (num % 10))) / 100)
    {
        printf("Ascending");
    }
    else
    {
        printf("Not ascending");
    }
    // It's a little bit confusing, may I use variables, but it will be an unnecessary memory usage.
    return 0;
}