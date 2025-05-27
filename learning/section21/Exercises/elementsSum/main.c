#include <stdio.h>

void readValues(int arr[3][3]) {
  int count = 1;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("Digite o digito No. %d.\n", count);
      scanf("%d", &arr[i][j]);
      count++;
    }
  }
}

int main() {
  int arr2d[3][3];
  readValues(arr2d);
  int sum = 0;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d + %d = %d", arr2d[i][j], sum, (arr2d[i][j] + sum));
      sum += arr2d[i][j];
      printf(" | ");
    }
    putchar('\n');
  }
}
