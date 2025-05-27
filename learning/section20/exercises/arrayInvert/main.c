#include <stdio.h>
#define tamanho (5)

void printArray(int num[], int tamanho) {
  int first = 1;
  printf("[");
  for (int i = 0; i < tamanho; i++) {
    if (i < tamanho - 1) {
      printf("%d, ", num[i]);
    } else {
      printf("%d.]", num[i]);
    }
  }
}

int main() {
  int numArray[tamanho] = {1, 2, 3, 4, 5};
  printArray(numArray, tamanho);
  return 0;
}
