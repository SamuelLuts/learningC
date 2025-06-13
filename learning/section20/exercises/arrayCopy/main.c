#include <stdio.h>

int main() {
  int arr[3] = {3, 9, 2008};

  int arrCopy[3];

  for (int i = 0; i < 3; i++) {
    arrCopy[i] = arr[i];
  }

  printf("Original array: \n");

  for (int i = 0; i < 3; i++) {
    printf("%d ", arr[i]);
  }

  printf("Copied array: \n");

  for (int i = 0; i < 3; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}
