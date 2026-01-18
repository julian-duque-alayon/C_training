#include <stdio.h>
#include <stdlib.h>
#include "variable_declaration.h"

void variable_declaration() {
  int i, j;
  float x, y;

  i = 10;
  j = 20;
  x = 10.5;
  y = 20.5;

  printf("i = %d, j = %d\n", i, j);
  printf("x = %f, y = %f\n", x, y);
  fflush(stdout);
}