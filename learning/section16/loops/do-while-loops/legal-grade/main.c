#include <stdio.h>

int main()
{
    int grade;
    do {
        printf("Digite sua nota: \n");
        scanf("%d", &grade);
        if (grade >= 0 && grade <= 100) {
            printf("Parabéns, você tirou %d, e essa é uma nota válida.\n", grade);
        } else {
            printf("Infelizmente, a nota informada, %d, não é válida, verifique-a.\n", grade);
        }   
    } while (grade > 0);
}