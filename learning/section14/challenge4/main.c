#include <stdio.h>

int main()
{
    int x, y;

    printf("Insira o valor da abscissa/x: \n");
    scanf("%i", &x);
    printf("Insira o valor da ordenada/y: \n");
    scanf("%i", &y);

    if (x > 0 && y > 0)
    {
        printf("O ponto está no primeiro quadrante.\n");
    }
    else if (x < 0 && y > 0)
    {
        printf("O ponto está no segundo quadrante.\n");
    }
    else if (x < 0 && y < 0)
    {
        printf("O ponto está no terceiro quadrante.\n");
    }
    else if (x > 0 && y < 0)
    {
        printf("O ponto está no quarto quadrante.\n");
    }
    // Outra solução, em 1 linha só:

    if (x != 0 && y != 0)
    {
        printf("O ponto está no %s quadrante.\n", (x > 0 && y > 0) ? ("primeiro") : (x < 0 && y > 0) ? ("segundo")
            : (x < 0 && y < 0) ? ("terceiro")
            : ("quarto"));
    }
    else
    {
        printf("O ponto não está em nenhum quadrante específico.\n");
    }

    return 0;
}
