#include <stdio.h>

int main() {
  int grades[5];
  int lowerGrade;
  for (int i = 0; i < 5; i++) {
    printf("Digite a nota no.%d\n", i + 1);
    scanf("%d", &grades[i]);
  }
  lowerGrade = grades[0];
  for (int i = 1; i < 5; i++) {
    if (grades[i] < lowerGrade)
      lowerGrade = grades[i];
  }

  printf("A menor nota foi %d.\n", lowerGrade);
  char choice;
  printf("Deseja ver quais foram as notas digitadas? [y/n] (n por padrão)\n");
  scanf(" %c", &choice);
  if (choice == 'y' || choice == 'Y') {
    putchar('[');
    for (int i = 0; i < 5; i++) {
      if (i < 4)
        printf("%d, ", grades[i]);
      else
        printf("%d.]\n", grades[i]);
    }
  }
  return 0;
}
