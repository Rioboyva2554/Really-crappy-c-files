#include <stdio.h>

int main() {
FILE *fptr;
char location[30];
  printf("Please input the location of this file (make sure to include the file name and extension at the end)\n");
fgets(location, 30, stdin);
fptr = fopen(location, "w");
return 0;
}
