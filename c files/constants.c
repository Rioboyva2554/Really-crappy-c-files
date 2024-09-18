#include <stdio.h>

int main() {
const char nowrite[] = "The variable that contains this text is only readable due to it being a constant";
char write[] = "However the variable that contains this text is writeable";
printf("%s\n", nowrite);
printf("%s\n", write);
return 0;
}
