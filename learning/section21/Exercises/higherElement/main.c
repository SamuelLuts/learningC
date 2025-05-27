#include <stdio.h>

void valuesReader(int arr[4][4]) {
  int counter = 1;
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      printf("Enter the digit No. %d.\n", counter);
      scanf("%d", &arr[i][j]);
      counter++;
    }
  }
}

int main() {
  int arr2d[4][4];
  valuesReader(arr2d);
  int max = arr2d[1][1], min = arr2d[1][1];
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      max = ((arr2d[i][j] > max) ? (arr2d[i][j]) : (max));
      min = ((arr2d[i][j] < min) ? (arr2d[i][j]) : (min));
    }
  }

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      printf("%d ", arr2d[i][j]);
    }
    putchar('\n');
  }
  putchar('\n');

  printf("O maior digito é %d.\n", max);
  printf("O menor digito é %d.\n", min);

  return 0;
}
