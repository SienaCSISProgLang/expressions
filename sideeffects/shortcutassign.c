/*
  Example of side effects with a shortcut assignment operator

  Jim Teresco
  The College of Saint Rose
  Programming Languages, CSC 433
  Fall 2012

  Updated for CSIS 340, Siena College, Fall 2019
*/

#include <stdio.h>

int main() {

  int x[4];
  x[0] = 10;
  x[1] = 11;
  x[2] = 12;
  x[3] = 13;

  int a = 1;

  x[a++] += a;

  printf("If we do x[a++] += a:\n");
  printf("a=%d, x[0]=%d, x[1]=%d, x[2]=%d, x[3]=%d\n", 
	 a, x[0], x[1], x[2], x[3]);

  x[0] = 10;
  x[1] = 11;
  x[2] = 12;
  x[3] = 13;
  a = 1;

  x[a++] = x[a++] + a;

  printf("If we do x[a++] = x[a++] + a:\n");
  printf("a=%d, x[0]=%d, x[1]=%d, x[2]=%d, x[3]=%d\n", 
	 a, x[0], x[1], x[2], x[3]);

  return 0;
}
