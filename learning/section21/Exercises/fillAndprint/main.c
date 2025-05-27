#include <stdio.h>

int main() {
  int arr2d[3][3];
  int count = 1;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("Digite os números da posição %d\n", count++);
      scanf("%d", &arr2d[i][j]);
    }
  }
  putchar('\n');

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d ", arr2d[i][j]);
    }
    putchar('\n');
  }
  return 0;
}
