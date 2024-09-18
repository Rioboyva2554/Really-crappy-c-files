#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
char username[20];
char password[100];
  bool isloggedin = false;
  while (isloggedin == false) {
printf("Username:");
  fgets(username, 20, stdin);
  username[strcspn(username, "\n")] = 0;
  printf("Password:");
  fgets(password, 100, stdin);
  password[strcspn(password, "\n")] = 0;
    if (strcmp(username, "rio") == 0) {
      if (strcmp(password, "Cisbetterthanpython") == 0) {
        printf("access granted\n");
               return 0;
      } else {
        printf("access denied\n");
      }
    } else {
printf("access denied\n");
    }
  
  
}
}
