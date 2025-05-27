#include <stdio.h>

// Peça o tamanho de uma cadeia de números, e peça os números, e verifique se:
// os números informados são ascendentes entre eles.
// EX: size = 5; cadeia = [1, 2, 3, 4, 5], crescente
// EX: size = 5; cadeia = [1, 2, 4, 4, 5], crescente
// EX: size = 5; cadeia = [1, 2, 3, 1, 5], decrescente

int main() {
    int sizeNum;
    printf("Digite qual será o tamanho da cadeia de números: \n");
    scanf("%d", &sizeNum);
    int num, numAnt;
    int check = 0;
    printf("Enter a number: \n");
    scanf("%d", &numAnt);
    for (int i = 2; i <= sizeNum; i++) {
        printf("Enter a number: \n");
        scanf("%d", &num);
        if (num > numAnt) {
            numAnt = num;
        }
        else {
            check = 1;
        }
    }
    if (check == 1) {
        printf("A cadeia não é crescente.\n");
    }
    else {
        printf("A cadeia é crescente.\n");
    }







    /*
    // Fiquei em dúvida em qual loop usar, porque eu precisava definir uma variável antes, mas também, o programa deve rodar ao menos 1 vez
    do {
        printf("Enter a number: \n");
        scanf("%d", &num);
        if (first) {
            first = 0;
            num = numAnt;
        }
        else if (num >= numAnt) {
            numAnt = num;
        }
        else {
            check = 1;
        }
        i++;
    } while (i <= sizeNum);
    if (check == 1) {
        printf("A cadeia numérica não é crescente.\n");
    }
    else {
        printf("A cadeia numérica é crescente.\n");
    }
    */

    return 0;
}