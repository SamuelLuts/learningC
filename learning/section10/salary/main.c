#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float hsalary, thours, msalary;

    printf("Digite o valor do salario por hora que voc� recebe: ");
    scanf("%f", &hsalary);
    printf("Digite o total de horas trabalhadas no m�s: ");
    scanf("%f", &thours);

    msalary = hsalary * thours;

    printf("Seu sal�rio total, por m�s, � de aproximadamente R$%.2f.\n", msalary);

    printf("Pressione 'enter' para continuar...");
    getchar();
    return 1;
}
