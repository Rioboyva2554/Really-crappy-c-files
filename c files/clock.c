#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>

int main () {
  int hour = 0;
  int minute = 00;
  int second = 00;
  bool loop = true;
 while (loop == true) {
sleep(1);
second++;
    if (second==60) {
      second = 0;
      minute++;
      if (minute==60) {
        minute = 0;
        hour++;
          if (hour==24) {
          hour = 0;
        }
      }
    }
  printf("%d:%d.%d\n", hour, minute, second);
  }
}

