/*
  Example showing how C interprets a common beginning programmer error.

  Jim Teresco
  CSIS-340, Siena College
  Fall 2023
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  int a, b, c;

  if (argc != 4) {
    fprintf(stderr, "Usage: %s a b c\n", argv[0]);
    exit(1);
  }

  a = atoi(argv[1]);
  b = atoi(argv[2]);
  c = atoi(argv[3]);

  printf("The result of (%d < %d < %d) is %d\n", a, b, c, (a < b < c));

  return 0;
}
