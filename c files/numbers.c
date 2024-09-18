#include <stdio.h>
#include <ncurses.h>

int main() {
    int yes = 1;
    initscr;
    while (yes) {
        yes++;
        printf("%d\n", yes);
            refresh();
    }
}
