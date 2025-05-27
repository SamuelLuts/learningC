#include <stdio.h>

int main() {
  int linhas = 3;
  for (int i = 1; i <= 3; i++) {
    for (int spaces = i - 1; spaces <= 3; spaces++) {
      putchar(' ');
    }
    for (int j = 1; j <= i; j++) {
      printf("%d ", j);
    }
    putchar('\n');
  }

  return 0;
}
