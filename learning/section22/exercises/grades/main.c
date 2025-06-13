#include <stdio.h>

int main() {
  int grade1 = 7, grade2 = 9;
  // Normal
  printf("%p\n", &grade1);
  printf("%p\n", &grade2);
  printf("%d\n", grade1);
  printf("%d\n", grade2);
  // With pointer
  //
  putchar('\n');
  int *p1 = &grade1;
  int *p2 = &grade2;

  printf("%p\n", p1);
  printf("%p\n", p2);
  printf("%d\n", *p1);
  printf("%d\n", *p2);
}
