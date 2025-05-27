#include <stdio.h>
#define arrayLenght 7

void printMinMax(float num[arrayLenght]) {
  float max = num[0];
  float min = num[0];
  for (int i = 0; i < arrayLenght; i++) {
    if (num[i] > max)
      max = num[i];
    if (num[i] < min)
      min = num[i];
  }
  printf("Temperatura máxima: %.2f\n", max);
  printf("Temperatura mínima: %.2f\n", min);
}

int main() {
  float num[arrayLenght];
  float average = 0;
  for (int i = 0; i < arrayLenght; i++) {
    printf("Enter the temperature of day %d: \n", i + 1);
    scanf("%f", &num[i]);
    average += num[i];
  }
  average /= 7;
  printf("A média das temperaturas informadas é %.2f.\n", average);
  printMinMax(num);
  return 0;
}
