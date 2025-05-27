#include <stdio.h>

void binaryLetter(int num) {
    for (int result = num; result / 2 >= 1; result /= 2) {
        int division = result % 2;
        printf("%d", division);
    }
}

int main()
{
    char c;
    printf("Digite o caractere que você deseja transformar em binário: \n");
    c = getchar();
    int ascii = c;
    binaryLetter(ascii);
}