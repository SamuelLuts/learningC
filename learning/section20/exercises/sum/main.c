#include <stdio.h>

void printArrayElements(int num[5]) {
  putchar('[');
  for (int i = 0; i <= 4; i++) {
    if (i < 4) {
      printf("%d, ", num[i]);
    } else {
      printf("%d.]\n", num[i]);
    }
  }
}

int main() {
  int num[5];
  int i = 0;
  int sum = 0;
  do {
    printf("Digite o número: \n");
    scanf("%d", &num[i]);
    i++;
  } while (i <= 4);
  for (i = 0; i <= 4; i++) {
    sum += num[i];
  }
  printf("A soma dos números digitados é %d.\n", sum);
  printf("Deseja checar todos os números digitados? [y/n].\n");
  char carac;
  scanf(" %c", &carac);
  if (carac == 'y' || carac == 'Y') {
    printArrayElements(num);
  }

  return 0;
}
