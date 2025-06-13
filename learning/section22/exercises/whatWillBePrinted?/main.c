#include <stdio.h>

int main() {
  int a = 5, b = 7;
  int *pa, *pb;
  printf("a = %d, b = %d\n", a, b);
  pa = &a;
  pb = &b;
  printf("a = %d, b = %d\n", a, b);
  *pa += 1;
  *pb += 3;
  printf("a = %d, b = %d\n", a, b);
  pa = pb;
  pb = pa;
  printf("a = %d, b = %d\n", a, b);
  printf("pa = %d, pb = %d\n", *pa, *pb);
  a = *pb;
  b = a - 3;
  printf("a = %d, b = %d\n", a, b);
  return 0;
}
