#include <stdio.h>
#define operations "[+, -, * or /]"
int main()
{
    float num1, num2, result;
    char op;

    printf("Digite o valor primeiro numero: \n");
    scanf("%f", &num1);
    printf("Digite a operação desejada %s: \n", operations);
    scanf(" %c", &op);
    printf("Digite o valor segundo numero: \n");
    scanf("%f", &num2);

    switch (op)
    {
    case '+':
    {
        result = num1 + num2;
        printf("O resultado da operação é %.2f.\n", result);
        break;
    }
    case '-':
    {
        result = num1 - num2;
        printf("O resultado da operação é %.2f.\n", result);
        break;
    }
    case '*':
    {
        result = num1 * num2;
        printf("O resultado da operação é %.2f.\n", result);
        break;
    }
    case '/':
    {
        if (num2 != 0)
        {
            result = num1 / num2;
            printf("O resultado da operação é %f.\n", result);
        }
        else
        {
            printf("Não é possível dividir por 0.\n");
        }
        break; 
    } default: {
        printf("Digite uma operação válida %s", operations);
    }
    }

    printf("Pressione 'enter' para finalizar o programa...");
    getchar();
    getchar();
    return 0;
}