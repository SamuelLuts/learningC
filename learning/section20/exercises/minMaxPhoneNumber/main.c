#include <stdio.h>

int lowerElementArray(int num[]) {
  int lowerElement = num[0];
  for (int i = 1; i < 7; i++) {
    if (num[i] < lowerElement)
      lowerElement = num[i];
  }
  return lowerElement;
}

int main() {
  int phoneNumberArray[7] = {1, 4, 0, 2, 9, 4, 5};
  printf("O menor número é %d.\n", lowerElementArray(phoneNumberArray));
  return 0;
}
