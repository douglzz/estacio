#include <stdio.h>

int main () {
  int numero[5] [5] = {
    {1, 2, 3, 4, 5},
    {6, 7, 8, 9, 10},
    {12, 12, 13, 14, 15},
    {16, 17, 18, 19, 20},
    {21, 22, 23, 24, 25},
  };

  printf("O primeiro valor é %d\n", numero[0] [1]);
  printf("O segundo valor é %d\n", numero[1] [3]);
  printf("O terceiro valor é %d\n", numero[2] [2]);
  printf("O quarto valor é %d\n", numero[3] [1]);
  printf("O quinto valor é %d\n", numero[4] [3]);

}