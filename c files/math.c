#include <stdio.h>

int main() {
int x = 1080, y = 1920;
int sum = x * y;
printf("in a HD screen there are %d pixels", sum);
x = 2073600, y = 4;
sum = y * x;
printf("\nso that means to fill an entire HD screen with text in /dev/fb0 you will need %d characters", sum);
printf("\n");
return 0;
}
