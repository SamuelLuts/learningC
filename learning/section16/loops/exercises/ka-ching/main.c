#include <stdio.h>

void elevado(int n, int power)
{
    int count = 1;
    for (float result = 1; power >= 1; power--)
    {
        result *= n;
        printf("dia %d: %.2f\n", count, result / 100);
        count++;
    }
}

int main()
{
    int sair = 1;
    do
    {
        char choose;
        printf("Qual você prefere?: \n");
        printf("a) 0.01 centavos que dobrem a cada dia durante 30 dias.\n");
        printf("b) 1 milhão agora.\n");
        scanf(" %c", &choose);
        switch (choose)
        {
        case 'a':
        {
            printf("Parabéns, ao decorrer dos 30 dias, você receberá: \n");
            elevado(2, 30);
            sair = 0;
            break;
        }
        case 'b':
        {
            char aChoose;
            printf("Parabéns, deseja ver quanto você ganharia ao final de 30 dias com a outra alternativa? [y/n]");
            scanf(" %c", &aChoose);
            if (aChoose == 'y' || aChoose == 'Y')
            {
                elevado(2, 30);
            }
            else
            {
                printf("Programa finalizado.\n");
            }
            sair = 0;
            break;
        }
        default:
        {
            printf("Por favor, selecione uma devida alternativa, a ou b.\n");
            continue;   
        }
        }
    } while (sair);
}