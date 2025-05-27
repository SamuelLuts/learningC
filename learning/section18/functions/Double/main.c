#include <stdio.h>

int digitSum(int num) {
    int sum = 0;
    while (num > 0) {
        int digit = num % 10;
        sum += digit;
        num /= 10;
    }
    return sum;
}
void digits(int num) { // N sei prr nenhuma de array, mas vô tentar fazer um bglh pelo oq eu me lembro

    int count = 0;
    for (int temp = num; temp > 0; count++) {
        temp /= 10;
    }

    int digitList[count];
    for (int temp = num, i = 0; temp > 0; i++) {
        int digit = temp % 10;
        digitList[i] = digit;
        temp /= 10;
    }
    for (int i = count - 1; i >= 0; i--) {
        if (i > 0)
            printf("%d, ", digitList[i]);
        else {
            printf("%d.\n", digitList[i]);
        }
    }
}

int main() {
    int num;
    printf("Digite um número: \n");
    scanf("%d", &num);
    int sumDigits = digitSum(num);
    printf("A soma dos digitos do número %d é: %d\n", num, sumDigits);
    char choice;
    printf("Deseja ver quais são esses dígitos? [S/n]");
    scanf(" %c", &choice);
    if (choice == 'S' || choice == 's')
        digits(num);
    printf("Programa finalizado.\n");
    return 0;
}