#include <stdio.h>

void valuesReader(int arr[3][3]) {
  int count = 1;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("Enter the digit No. %d: \n", count);
      scanf("%d", &arr[i][j]);
      count++;
    }
  }
}

void rowSum(int arr[3][3]) {
  int rowSum;
  int count = 1;
  for (int i = 0; i < 3; i++) {
    rowSum = 0;
    for (int j = 0; j < 3; j++) {
      rowSum += arr[i][j];
    }
    printf("Row %d = %d.\n", count, rowSum);
    count++;
  }
}

void columnSum(int arr[3][3]) {
  int columnSum;
  int count = 1;
  for (int j = 0; j < 3; j++) {
    columnSum = 0;
    for (int i = 0; i < 3; i++) {
      columnSum += arr[i][j];
    }
    printf("Column %d = %d\n", count, columnSum);
    count++;
  }
}

int main() {
  int arr[3][3];
  valuesReader(arr);
  rowSum(arr);
  putchar('\n');
  columnSum(arr);
  return 0;
}
