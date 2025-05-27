#include <stdio.h>

int main() {
  char array2d[5][5];
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      if (i % 2 == 1) {
        array2d[i][j] = '-';
      } else if (j % 2 == 1) {
        array2d[i][j] = '|';
      } else {
        array2d[i][j] = ' ';
      }
    }
  }

  int turn = 0;
  while (1) {
    int x, y;
    printf("Digite a posição que deseja pôr seu símbolo: \n");
    printf("Eixo X: \n");
    scanf("%d", &x);
    printf("Eixo Y: \n");
    scanf("%d", &y);

    if (x == 1)
      x = 0;
    else if (x == 3)
      x = 4;
    if (y == 1)
      y = 0;
    else if (y == 3)
      y = 4;

    array2d[y][x] = (turn % 2 == 0 ? 'X' : 'O');

    // Linhas
    if ((array2d[0][0] == 'X' && array2d[0][2] == 'X' &&
         array2d[0][4] == 'X') ||
        (array2d[0][0] == 'O' && array2d[0][2] == 'O' &&
         array2d[0][4] == 'O') ||

        (array2d[2][0] == 'X' && array2d[2][2] == 'X' &&
         array2d[2][4] == 'X') ||
        (array2d[2][0] == 'O' && array2d[2][2] == 'O' &&
         array2d[2][4] == 'O') ||

        (array2d[4][0] == 'X' && array2d[4][2] == 'X' &&
         array2d[4][4] == 'X') ||
        (array2d[4][0] == 'O' && array2d[4][2] == 'O' &&
         array2d[4][4] == 'O') ||

        // Colunas
        (array2d[0][0] == 'X' && array2d[2][0] == 'X' &&
         array2d[4][0] == 'X') ||
        (array2d[0][0] == 'O' && array2d[2][0] == 'O' &&
         array2d[4][0] == 'O') ||

        (array2d[0][2] == 'X' && array2d[2][2] == 'X' &&
         array2d[4][2] == 'X') ||
        (array2d[0][2] == 'O' && array2d[2][2] == 'O' &&
         array2d[4][2] == 'O') ||

        (array2d[0][4] == 'X' && array2d[2][4] == 'X' &&
         array2d[4][4] == 'X') ||
        (array2d[0][4] == 'O' && array2d[2][4] == 'O' &&
         array2d[4][4] == 'O') ||

        // Diagonais
        (array2d[0][0] == 'X' && array2d[2][2] == 'X' &&
         array2d[4][4] == 'X') ||
        (array2d[0][0] == 'O' && array2d[2][2] == 'O' &&
         array2d[4][4] == 'O') ||

        (array2d[4][0] == 'X' && array2d[2][2] == 'X' &&
         array2d[0][4] == 'X') ||
        (array2d[4][0] == 'O' && array2d[2][2] == 'O' &&
         array2d[0][4] == 'O')) {
      if (turn % 2 == 0) {
        printf("X ganhou!\n");
      } else {
        printf("O ganhou!\n");
      }

      break; // sai do while se alguém ganhar
    }

    for (int i = 0; i < 5; i++) {
      for (int j = 0; j < 5; j++) {
        printf("%c ", array2d[i][j]);
      }
      putchar('\n');
    }

    turn++;
  }
  putchar('\n');
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      printf("%c ", array2d[i][j]);
    }
    putchar('\n');
  }
  putchar('\n');
  return 0;
}
