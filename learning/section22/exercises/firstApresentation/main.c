#include <stdio.h>

void swap(int *pa, int *pb) {
  int temp = *pa;
  *pa = *pb;
  *pb = temp;
}

int main() {
  int a, b;
  printf("Value 1 = ");
  scanf("%d", &a);
  printf("Value 2 = ");
  scanf("%d", &b);

  printf("a Before Swap: %d\n", a);
  printf("b Before Swap: %d\n", b);

  int *pa = &a;
  int *pb = &b;
  swap(pa, pb);

  printf("a after Swap: %d\n", a);
  printf("b after Swap: %d\n", b);

  return 0;
}
