#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: \n");
    scanf("%d", &num);
    
    for (int count = 1, i = 2; count <= num; count++, i +=2) {
        printf("%d ", i);
    }
    return 0;
}