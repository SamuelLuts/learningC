#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float hsalary, thours, msalary;

    printf("Digite o valor do salario por hora que você recebe: ");
    scanf("%f", &hsalary);
    printf("Digite o total de horas trabalhadas no mês: ");
    scanf("%f", &thours);

    msalary = hsalary * thours;

    printf("Seu salário total, por mês, é de aproximadamente R$%.2f.\n", msalary);

    printf("Pressione 'enter' para continuar...");
    getchar();
    return 1;
}
