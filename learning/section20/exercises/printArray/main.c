#include <stdio.h>

int main() {
  int num[5];
  for (int i = 0; i < 5; i++) {
    printf("Enter the %d number: ", i++);
    scanf("%d", &num[i]);
  }
  for (int i = 0; i < 5; i++) {
    printf("%d ", num[i]);
  }
  return 0;
}
