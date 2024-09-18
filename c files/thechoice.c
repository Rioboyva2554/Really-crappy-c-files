#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
    printf("Do you like python:\n ");
    char lifechoice[3];
    fgets(lifechoice, 3, stdin);
    lifechoice[strcspn(lifechoice, "\n")] = 0;
    if (strcmp(lifechoice, "yes") == 0) {
        printf("loser\n");
      } else if (strcmp(lifechoice, "no") == 0) {
          printf("that is very cool of you\n");
        }
  }
