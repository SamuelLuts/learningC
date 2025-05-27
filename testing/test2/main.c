#include <stdio.h>

void valuesReader(int arr[4][4]) {
  int count = 1;
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      printf("Enter the digit No. %d: \n", count);
      scanf("%d", &arr[i][j]);
      count++;
    }
  }
}

void minMax(int arr[4][4]) {
  int cordMin[2];
  int cordMax[2];
  int max = arr[0][0], min = arr[0][0];
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      if (arr[i][j] > max) {
        max = arr[i][j];
        cordMax[0] = i + 1;
        cordMax[1] = j + 1;
      } else if (arr[i][j] < min) {
        min = arr[i][j];
        cordMin[0] = i + 1;
        cordMin[1] = j + 1;
      }
    }
  }
  printf(" Max = %d\n", max);
  printf("x = %d, y = %d\n", cordMax[1], cordMax[0]);
  putchar('\n');
  printf(" Min = %d\n", min);

  printf("x = %d, y = %d\n", cordMin[1], cordMin[0]);
}

int main() {
  int arr[4][4];
  valuesReader(arr);
  minMax(arr);

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      printf("%d ", arr[i][j]);
    }
    putchar('\n');
  }
  return 0;
}
