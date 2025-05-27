#include <stdio.h>

void fatorizar(int num)
{
    int prime = 2;
    printf("%d = ", num);
    while (num > 1)
    {
        if (num % prime == 0)
        {
            num /= prime;
            if (num > 1)
            {
                printf("%d * ", prime);
            }
            else
            {
                printf("%d.", prime);
            }
        }
        else
        {
            prime++;
        }
    }
}

int perfectCheck(int num)
{
    int divisor = 1;
    int result = 0;
    while (divisor < num)
    {
        if (num % divisor == 0)
        {
            result += divisor;
        }
        divisor++;
    }
    return result;
}
