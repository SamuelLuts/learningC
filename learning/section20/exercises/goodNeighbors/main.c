// Fazer um programa que cheque se, em um conjunto de 5 números, há pelo menos
// um com 'bons vizinhos'; É considerado bons vizinhos, caso algum número
// resulte pela multiplicação de seus arredores; EX: {3, 5, 3, 6, 2} -> é um bom
// vizinho, 6 = 3 * 2; EX: {3, 2, 1, 5, 3} -> não há nenhum vizinho;

#include <stdio.h>
#define arrayLength 5

void goodNeighborsCheck(int num[arrayLength]) {
  int goodNeighbors = 0;
  for (int i = 1; i < arrayLength - 1; i++) {
    int fastcheck = num[i - 1] * num[i + 1];
    if (fastcheck == num[i]) {
      goodNeighbors = 1;
    }
  }
  printf("Dentre os números informados, ");
  if (goodNeighbors == 1)
    printf("há bons vizinhos.\n");
  else
    printf("não há bons vizinhos.\n");
}

int main() {
  int num[arrayLength];
  for (int i = 0; i < arrayLength; i++) {
    printf("Digite o número %d: \n", i + 1);
    scanf("%d", &num[i]);
  }
  goodNeighborsCheck(num);
}
