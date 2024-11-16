#include <unistd.h>
#include <stdio.h>
#include <signal.h>

int main() {
  pid_t pid = fork();
  if (pid == 0) {
  int ping = getpid();
    printf("This C program's PID is:%d\n", ping);
  }
}
