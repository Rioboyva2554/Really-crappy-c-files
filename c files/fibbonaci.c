#include <stdio.h>

int main() {
  FILE *fp;
  int fib1 = 0;
  int fib2 = 1;
  int nexterm;
  fp = fopen("fibonacci.txt", "w");
  fclose(fp);
  while (main) {
    fp = fopen("fibonacci.txt", "a");
    nexterm = fib1 + fib2;
    fib1 = fib2;
    fib2 = nexterm;
    fprintf(fp, " %s,", nexterm);
    fclose(fp);
  }
}
