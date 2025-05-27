#include <stdio.h>

int main() {
  int num[7];
  int max;
  for (int i = 0; i < 5; i++) {
    printf("Enter number %d.\n", i++);
    scanf("%d", &num[i]);
    if (i == 0)
      max = num[0];
    else if (num[i] > max)
      max = num[i];
  }
  printf("%d.\n", max);
}
