#include <stdio.h>

int main() {
  int arr2D[3][3];
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (i == j || i + j == 2) {
        printf("%d ", arr2D[i][j]);
      } else {
        printf("  ");
      }
    }
    putchar('\n');
  }
  return 0;
}
