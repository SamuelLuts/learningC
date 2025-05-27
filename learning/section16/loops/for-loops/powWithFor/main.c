#include <stdio.h>

int main()
{
    int pow, num;
    int result;
    do {
        result = 1; // Reseta a variável sempre para 1 quando o do-while acaba
        printf("Digite o número que deseja elevar: \n");
        scanf("%d", &num);
        if (num >= 0) { // Verifica se o número é maior ou igual a 0 para continuar o código
            printf("Digite o expoente que o número ficará elevado: \n");
            scanf("%d", &pow);
            int temp = pow; // Para ficar bonito
            for (; temp >= 1; temp--) { 
                result *= num;
            }
            printf("%d^%d = %d.\n", num, pow, result);
        }
        else {
            printf("Programa finalizado.\n");
        }
    } while (num >= 0);
    return 0;
}