#include <stdio.h>
#define SIZE 5
void swap(int arr[2]) {
  // int temp = a;
  // a = b;
  // b = temp;
  for (int i = 0; i < SIZE; i++) {
    scanf("%d", &arr[i]);
  }
}

int main() {
  int arr[SIZE];

  swap(arr);

  for (int i = 0; i < SIZE; i++) {
    printf("%d ", arr[i]);
  }
}
