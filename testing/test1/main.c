#include <stdio.h>

int main() {
  int num = 811;
  int primeCheck = 0;
  for (int i = 2; i < num / 2; i++) {
    if (num % i == 0) {
      primeCheck = 1;
      printf("%d\n", i);
    }
  }
  if (primeCheck == 1)
    printf("O número não é primo.\n");
  else
    printf("O número é primo.\n");
}
