#include <stdio.h>

void valuesReader(int arr[3][3]) {
  int count = 1;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("Digite o dígito No. %d\n", count);
      scanf("%d", &arr[i][j]);
      count++;
    }
  }
}

int main() {
  int arr[3][3];
  int sum = 0;
  valuesReader(arr);
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (i == j)
        sum += arr[i][j];
    }
  }
  printf("A soma dos dígitos da diagonal principal é %d.\n", sum);
}
