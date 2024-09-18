#include <stdio.h>

int main() {
  FILE *host;
    host = fopen("/etc/hostname", "r");
char hostname[15];
fgets(hostname, 15, host);
    printf("%s:", hostname);
}
