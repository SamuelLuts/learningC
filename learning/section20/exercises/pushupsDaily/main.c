#include <stdio.h>
#define arrayLength 10
int main() {
  int num[arrayLength];
  for (int i = 0; i < arrayLength; i++) {
    printf("Digite a quantidade de flexões: \n");
    scanf("%d", &num[i]);
  }
  for (int i = 9; i >= 0; i--) {
    printf("%d dias atrás, você fez %d flexões.\n", i, num[i]);
  }
  return 0;
}
