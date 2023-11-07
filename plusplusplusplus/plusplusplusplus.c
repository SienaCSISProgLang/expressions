#include <stdio.h>

int main() {

  int x = 1;
  int y;

  y = x++ + ++x;

  printf("x is %d, y is %d\n", x, y);

  return 0;
}
