#include <stdio.h>
#define size 5

int main() {
  const int arr[size] = {1, 2, 3, 1, 1};
  int j = size - 1;
  for (int i = 0; i < size; i++) {
    if (arr[i] != arr[j]) {
      printf("O array informado não é um palíndromo.\n");
      return 0;
    }
    j--;
  }
  printf("O array informado é um palíndromo.\n");

  return 0;
}
