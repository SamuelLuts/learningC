#include <stdio.h>

int findMinMax(int *pmax, int *pmin) {
  if (*pmin > *pmax) {
    int temp = *pmin;
    *pmin = *pmax;
    *pmax = temp;
  }
  return 0;
}

int main() {
  int a = 8, b = 2;
  int *pa = &a;
  int *pb = &b;

  findMinMax(pa, pb);

  printf("max = %d\n", a);
  printf("Min = %d\n", b);

  return 0;
}
